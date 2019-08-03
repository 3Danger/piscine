/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_combn.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/03 13:05:57 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/03 15:51:57 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

typedef enum { false, true } bool;

bool	ft_check_combn_digits(short *digits, int n)
{
	int	x;

	x = 0;
	while (x < n - 1)
	{
		if (digits[x] >= digits[x + 1])
		{
			return false;
		}
		x += 1;
	}
	return true;
}

void	ft_print_combn_digits(short *digits, int n, bool isfirst) 
{
	int	x;
	char	out;
	
	x = 0;
	if (!isfirst)
	{
		write(1, ", ", 2);
	}
	while (x < n)
	{
		out = digits[x] + '0';
		write(1, &out, 1);
		x += 1;
	}
}

void	ft_init_combn_digits(short *digits, int n)
{
	int		x;

	x = 0;
	while (x < n)
	{
		digits[x] = x;
		x += 1;
	}
}

void	ft_increment_combn_digits(short *digits, int n, int current_digit)
{
	int		x;
	
	digits[current_digit] += 1;
	if (digits[current_digit] == 10)
	{
		digits[current_digit] = 0;
		ft_increment_combn_digits(digits, n, current_digit - 1);
	} else {
		return;
	}
}

void	ft_print_combn(int n)
{
	short 	digits[n];

	ft_init_combn_digits(digits, n);
	ft_print_combn_digits(digits, n, true);
	while (digits[0] <= (10 - n))
	{
		ft_increment_combn_digits(digits, n, n - 1);
		if (ft_check_combn_digits(digits, n))
		{
			ft_print_combn_digits(digits, n, false);			
		}
	}
}



int	main(void)
{
	ft_print_combn(3);
}

