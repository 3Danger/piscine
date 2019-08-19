/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   parser_utils.h                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/18 19:42:20 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/18 20:26:28 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef PARSER_UTILS_H
# define PARSER_UTILS_H
# include "./dictionary.h"

void		ft_parse_letter(
		char **word_buffer,
		char file_buffer,
		int *word_buffer_size);

void		ft_add_nop(
		char **number_buffer,
		int *number_buffer_size,
		char **word_buffer,
		int *word_buffer_size);

void		ft_realloc_buffers(
		char **number_buffer,
		int *number_buffer_size,
		char **word_buffer,
		int *word_buffer_size);
#endif
