/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/02 01:05:41 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/05 18:32:06 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

int		ft_pow_ten(int x)
{
	if (x <= 0)
	{
		return (1);
	}
	while (x > 0)
	{
		return (ft_pow_ten(x - 1) * 10);
	}
	return (x);
}

int		ft_count_digits(int nb)
{
	int	digits;

	if (nb == 0)
		return (1);
	digits = 0;
	while (nb > 0)
	{
		nb /= 10;
		digits += 1;
	}
	return (digits);
}

void	ft_putnbr(int nb)
{
	int		digits;
	char	digit;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	digits = ft_count_digits(nb) - 1;
	while (digits >= 0)
	{
		digit = '0' + nb / ft_pow_ten(digits);
		nb %= ft_pow_ten(digits);
		write(1, &digit, 1);
		digits -= 1;
	}
}
