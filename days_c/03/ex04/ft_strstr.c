/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/07 23:00:50 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/14 23:28:23 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

int			ft_strlens(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		i += 1;
	}
	return (i);
}

char		*ft_strstr(char *str, char *to_find)
{
	int		x;
	int		y;
	int		needle_len;
	int		haystack_len;

	needle_len = ft_strlens(to_find);
	haystack_len = ft_strlens(str);
	x = 0;
	if (haystack_len == 0)
		return (0);
	if (needle_len > haystack_len)
		return (str);
	while (str[x])
	{
		y = 0;
		while (str[x + y] == to_find[y])
		{
			if (y + 1 == needle_len)
				return (str + x);
			y += 1;
		}
		x += 1;
	}
	return (str);
}
