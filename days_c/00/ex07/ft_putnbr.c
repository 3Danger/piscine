/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/02 01:05:41 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/02 01:21:28 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putbnr(int digits_nb, int nb)
{
	char	digits[digits_nb];
	int		current_digit;
	int		i;

	current_digit = 0;
	i = nb;
	while (i > 0)
	{
		digits[current_digit] = '0' + (i % 10);
		current_digit += 1;
		i /= 10;
	}
	i = current_digit;
	while (i > 0)
	{
		write(1, &digits[i - 1], 1);
		i -= 1;
	}
}

void	ft_putnbr(int nb)
{
	int		i;
	int		digits_nb;

	i = nb;
	digits_nb = 0;
	while (i > 0)
	{
		digits_nb += 1;
		i /= 10;
	}
	ft_putbnr(digits_nb, nb);
}
