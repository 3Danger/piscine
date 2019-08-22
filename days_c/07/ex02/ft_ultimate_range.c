/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_ultimate_range.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/22 19:20:00 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/22 21:55:07 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		*tab;
	int		a;

	a = 0;
	*range = NULL;
	if (min >= max)
		return (0);
	tab = (int*) malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (-1);
	while (min < max)
	{
		tab[a] = min;
		min++;
		a++;
	}
	*range = tab;
	return (a);
}
