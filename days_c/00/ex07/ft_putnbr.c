/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/02 01:05:41 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/07 11:49:09 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

const int g_int_min = -2147483648;

void	ft_putchar9(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_(int nb)
{
	if (nb >= 10)
	{
		ft_putnbr_(nb / 10);
		ft_putnbr_(nb % 10);
	}
	else if (nb < 0)
	{
		if (nb == -g_int_min)
		{
			ft_putnbr_(-214748364);
			ft_putnbr_(8);
		}
		else
		{
			write(1, "-", 1);
			ft_putnbr_(nb * -1);
		}
	}
	else
		ft_putchar9('0' + nb % 10);
}
