/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   dictionary.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/17 16:28:57 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/18 23:38:45 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "./../includes/parser.h"
#include "./../includes/stdio.h"
#include "./../includes/string.h"
#include "./../includes/dictionary.h"
#include "./../includes/converter.h"

t_word				*ft_fill_word(char *number, char *number_str)
{
	t_word			*word;

	word = malloc(sizeof(t_word));
	word->n = ft_atoi(number);
	word->word = ft_strdup(ft_trim_begin(number_str));
	(void)word;
	(void)number;
	(void)number_str;
	return (word);
}

t_dictionary		ft_fill_dictionary(char *dictionary_path)
{
	int				fd;
	t_dictionary	dict;
	char			*file_buffer;

	dict.size = 0;
	dict.words = malloc(sizeof(t_word));
	file_buffer = 0;
	fd = open(dictionary_path, O_RDONLY);
	if (fd < 0)
	{
		write(1, "Error - unable to open the dictionary path [", 44);
		ft_putstr(dictionary_path);
		write(1, "]", 1);
	}
	else
	{
		file_buffer = ft_read_input(-1, fd);
		ft_parse_dict(&dict, file_buffer);
	}
	return (dict);
}

t_word				*get_word(unsigned long long number, t_dictionary *dict)
{
	unsigned int		i;

	i = dict->size;
	while (i > 0)
	{
		if (dict->words[i - 1]->n == number)
		{
			return (dict->words[i - 1]);
		}
		i -= 1;
	}
	return (0);
}

void				reccursive_int_cvt(
		unsigned long long number, t_dictionary *dict, unsigned int deep)
{
	t_word			*last_word;
	t_word			*current_word;

	last_word = dict->words[dict->size - 1 - deep];
	if (number == 0)
		return ;
	current_word = get_word(number, dict);
	if (current_word > 0 && (number > 100 ? number % 100 == 0 : 1))
		ft_putstr(current_word->word);
	else if (number / last_word->n > 0 && last_word->n % 10 == 0)
		ft_proceed_banana(last_word, dict, number, deep);
	else
		reccursive_int_cvt(number, dict, deep + 1);
}

void				ft_display_number(
		unsigned long long number, char *dictionary_path)
{
	t_dictionary		dict;
	unsigned long long	max_num;
	unsigned int		i;

	dict = ft_fill_dictionary(dictionary_path);
	max_num = dict.words[dict.size - 1]->n;
	if (number / max_num > 999)
	{
		write(1, "Error - max value exceded", 25);
	}
	else
	{
		if (number == 0)
			ft_putstr(get_word(0, &dict)->word);
		else
			reccursive_int_cvt(number, &dict, 0);
	}
	i = 0;
	while (i < dict.size)
		free(dict.words[i++]);
}
