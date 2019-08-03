/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_ref_int_tab.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/03 17:30:13 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/03 17:41:29 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ref_int_tab(int *tab, int size)
{
	int		new_tab[size];
	int		i;

	i = 0;
	while (i < size)
	{
		new_tab[i] = tab[size - 1 - i];
		i += 1;
	}
	while (i >= 0)
	{
		tab[i] = new_tab[i];
		i -= 1;
	}
}
