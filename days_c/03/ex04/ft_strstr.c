/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/07 23:00:50 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/10 23:40:02 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char		*ft_strstr(char *str, char *to_find)
{
	unsigned int	x;
	unsigned int	y;
	unsigned int	z;

	z = 0;
	while (to_find[z])
	{
		z += 1;
	}
	x = 0;
	while (str[x])
	{
		y = 0;
		while (str[x + y] == to_find[y])
		{
			if (y == z - 1)
				return (str + x + y - 1);
			y += 1;
		}
		x += 1;
	}
	return (str);
}
