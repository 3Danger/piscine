/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   converter.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/18 22:19:20 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/18 23:36:18 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>
#include "./../includes/string.h"
#include "./../includes/dictionary.h"
#include "./../includes/parser.h"
#include "./../includes/stdio.h"
#include "./../includes/converter.h"

void			ft_display_single(unsigned long long n, t_dictionary *dict)
{
	ft_putstr(get_word(n + 1, dict)->word);
	write(1, " ", 1);
}

void			ft_display_specials(unsigned long long n,
		unsigned int number,
		t_dictionary *dict)
{
	if (number % n && n / 100 >= 1)
	{
		write(1, " ", 1);
		ft_putstr(get_word(103, dict)->word);
		write(1, " ", 1);
	}
	else if (number % n && n % 100 >= 1)
	{
		write(1, "-", 1);
	}
	else
	{
		write(1, " ", 1);
	}
}

void			ft_proceed_banana(
		t_word *last_word,
		t_dictionary *dict,
		unsigned long long number,
		unsigned int deep)
{
	if (last_word->n / 10 == 10 && number / last_word->n == 1)
		ft_display_single(last_word->n, dict);
	else if (last_word->n / 10 > 10)
	{
		reccursive_int_cvt(number / last_word->n, dict, deep);
		write(1, " ", 1);
	}
	else if (number / last_word->n > 1)
	{
		reccursive_int_cvt(number / last_word->n, dict, deep);
		write(1, " ", 1);
	}
	if (number / last_word->n > 1)
		ft_putstr(get_word(last_word->n + 2, dict)->word);
	else
		ft_putstr(last_word->word);
	ft_display_specials(last_word->n, number, dict);
	reccursive_int_cvt(number % last_word->n, dict, deep);
}
