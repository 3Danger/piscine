/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   converter.h                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/18 22:17:16 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/18 23:35:31 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef CONVERTER_H
# define CONVERTER_H
# include "./string.h"
# include "./stdio.h"
# include "./dictionary.h"

void			ft_display_single(unsigned long long n, t_dictionary *dict);

void			ft_display_specials(unsigned long long n,
		unsigned int number,
		t_dictionary *dict);

void			ft_proceed_banana(
		t_word *last_word,
		t_dictionary *dict,
		unsigned long long number,
		unsigned int deep);
#endif
