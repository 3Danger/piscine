/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   parser.h                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/18 19:20:27 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/18 20:49:08 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef PARSER_H
# define PARSER_H
# include "./dictionary.h"

void	ft_i(
		char **number_buffer,
		int *number_buffer_size,
		char **word_buffer,
		int	*word_buffer_size);

int		ft_parse_digit(
		char **number_buffer,
		int *number_buffer_size,
		char file_buffer);

void	ft_parse_word(
		char **number_buffer,
		char **word_buffer,
		t_dictionary *dict,
		int *waiting_number);

void	ft_parse_dict(t_dictionary *dict, char *file_buffer);

#endif
