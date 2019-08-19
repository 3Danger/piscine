/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   dictionary.h                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/17 16:28:57 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/18 23:35:49 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef DICTIONARY_H
# define DICTIONARY_H

typedef struct		s_word
{
	unsigned long long		n;
	char					*word;
}					t_word;

typedef struct		s_dictionary
{
	unsigned int		size;
	t_word				**words;
}					t_dictionary;

t_word				*ft_fill_word(char *number, char *number_str);

t_dictionary		ft_fill_dictionary(char *dictionary_path);

void				ft_display_number(
		unsigned long long number,
		char *dictionary_path);

t_word				*get_word(unsigned long long number, t_dictionary *dict);

void				reccursive_int_cvt(unsigned long long number,
				t_dictionary *dict, unsigned int deep);
#endif
