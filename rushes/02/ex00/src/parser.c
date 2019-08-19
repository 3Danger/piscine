/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   parser.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/18 19:39:25 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/18 21:13:00 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "./../includes/string.h"
#include "./../includes/dictionary.h"
#include "./../includes/parser_utils.h"

void		ft_i(
		char **number_buffer,
		int *number_buffer_size,
		char **word_buffer,
		int *word_buffer_size)
{
	*word_buffer_size = 0;
	*number_buffer_size = 0;
	*word_buffer = malloc(sizeof(char));
	*number_buffer = malloc(sizeof(char));
}

int			ft_parse_n(
		char **number_buffer,
		int *number_buffer_size,
		char file_buffer)
{
	char	*nbr;

	if (!ft_is_number(file_buffer))
	{
		write(1, "Dict Error", 10);
		return (0);
	}
	nbr = *(number_buffer);
	nbr[*number_buffer_size] = file_buffer;
	*number_buffer_size += 1;
	*number_buffer = realloc(*number_buffer,
			(*number_buffer_size + 1) * sizeof(char));
	return (1);
}

void		ft_parse_word(
		char **number_buffer,
		char **word_buffer,
		t_dictionary *dict,
		int *waiting_number)
{
	dict->size += 1;
	dict->words = realloc(dict->words,
			(dict->size + 1) * sizeof(t_word*));
	dict->words[dict->size - 1] = ft_fill_word(*number_buffer, *word_buffer);
	*waiting_number = 1;
}

void		ft_parse_dict(t_dictionary *dict, char *file_buffer)
{
	char			*number_buffer;
	int				number_buffer_size;
	char			*word_buffer;
	int				word_buffer_size;
	int				waiting_number;

	ft_i(&number_buffer, &number_buffer_size, &word_buffer, &word_buffer_size);
	waiting_number = 1;
	file_buffer -= 1;
	while (*++file_buffer)
		if (*file_buffer == ':')
			waiting_number = 0;
		else if ((*file_buffer == '\n' || !*(file_buffer + 1)))
		{
			ft_add_nop(&number_buffer, &number_buffer_size, &word_buffer,
					&word_buffer_size);
			ft_parse_word(&number_buffer, &word_buffer, dict, &waiting_number);
			ft_realloc_buffers(&number_buffer, &number_buffer_size,
					&word_buffer, &word_buffer_size);
		}
		else if ((waiting_number) && !ft_parse_n(&number_buffer,
				&number_buffer_size, *file_buffer))
			break ;
		else if (!waiting_number)
			ft_parse_letter(&word_buffer, *file_buffer, &word_buffer_size);
}
