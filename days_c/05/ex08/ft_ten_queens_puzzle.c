/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_ten_queens_puzzle.c                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/10 21:28:25 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/16 14:52:22 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

const int	g_puzzle_size = 10;

void	show_digits(char *digits, int *possibilities)
{
	int		i;

	i = 0;
	*possibilities += 1;
	while (digits[i])
		write(1, &digits[i++], 1);
	write(1, "\n", 1);
}

int		check_digits(char *digits, int x, int y)
{
	int	y2;
	int	x2;

	y2 = 0;
	x2 = digits[y2] - '0';
	while (y2 < y)
		if (x2 == x || x2 - y2 == x - y || x2 + y2 == x + y)
			return (0);
		else
			x2 = digits[++y2] - '0';
	digits[y] = x + '0';
	return (1);
}

int		increment_digits(char *digits, int y)
{
	int	possibilities;
	int	x;

	possibilities = 0;
	x = -1;
	if (y == g_puzzle_size)
		show_digits(digits, &possibilities);
	else
		while (++x < g_puzzle_size)
			if (check_digits(digits, x, y))
				possibilities += increment_digits(digits, y + 1);
	return (possibilities);
}

int		ft_ten_queens_puzzle(void)
{
	char	digits[g_puzzle_size + 1];
	int		i;

	i = 0;
	digits[i++] = '0';
	digits[i++] = '2';
	digits[i++] = '5';
	digits[i++] = '7';
	digits[i++] = '9';
	digits[i++] = '4';
	digits[i++] = '8';
	digits[i++] = '1';
	digits[i++] = '3';
	digits[i++] = '6';
	return (increment_digits(digits, 0));
}
