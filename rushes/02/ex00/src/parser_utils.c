/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   parser_utils.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/18 19:45:58 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/18 20:26:48 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "./../includes/dictionary.h"
#include "./../includes/parser.h"

void			ft_realloc_buffers(
		char **number_buffer,
		int *number_buffer_size,
		char **word_buffer,
		int *word_buffer_size)
{
	char	*nbr;
	char	*wrd;

	nbr = *number_buffer;
	wrd = *word_buffer;
	*number_buffer = malloc(sizeof(char));
	*word_buffer = malloc(sizeof(char));
	*word_buffer_size = 0;
	*number_buffer_size = 0;
}

void			ft_parse_letter(
		char **word_buffer,
		char file_buffer,
		int *word_buffer_size)
{
	char	*buffer;

	buffer = *word_buffer;
	buffer[*word_buffer_size] = file_buffer;
	*word_buffer_size += 1;
	*word_buffer = realloc(*word_buffer,
			(*word_buffer_size + 1) * sizeof(char));
}

void			ft_add_nop(
		char **number_buffer,
		int *number_buffer_size,
		char **word_buffer,
		int *word_buffer_size)
{
	char	*nbr;
	char	*wrd;

	nbr = *number_buffer;
	wrd = *word_buffer;
	nbr[*number_buffer_size] = '\0';
	wrd[*word_buffer_size] = '\0';
}
