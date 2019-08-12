/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putstr_non_printable.c                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/05 11:11:23 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 13:06:05 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

const char	*g_hexn = "0123456789abcdef";

void	ft_putchartohex(int n)
{
	write(1, "\\", 1);
	write(1, &g_hexn[n / 16], 1);
	write(1, &g_hexn[n % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = -1;
	while (str[++i])
		if (str[i] < ' ')
			ft_putchartohex(str[i]);
		else
			write(1, &str[i], 1);
}
