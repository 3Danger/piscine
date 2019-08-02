/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_combn.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/02 01:34:23 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/02 02:30:01 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

int		check_digits_format(short* digits, short nb_digits)
{
	int i = 0;
	int success = 1;
	while(i < --nb_digits)
	{
		if (digits[i] >= digits[i + 1]) 
		{
			success = 0;
		}
		i += 1;
	}
	return success;
}

void 	ft_show_digits(short* digits, short nb_digits)
{
	char	out;
	int		i;
	i = 0;

	// TODO : check that all digits are inferiors each others
	while(i < nb_digits)
	{
		out = digits[i] + '0';
		write(1, &out, 1);		
		i += 1;
	}
	out = ' ';
	write(1, &out, 1);
}

void	proceed(short* digits, short nx, short nb_digits)
{
	char	out;
	if (nx > nb_digits) 
	{
		return;
	}
	while (digits[nx] < 9 - nx)
	{
		if (check_digits_format(digits, nb_digits)) 
		{	
			proceed(digits, nx + 1, nb_digits);
			ft_show_digits(digits, nb_digits);
		}
		
			   	digits[nx - 1] += 1; 
	}
	digits[nx] = 0;
}

void	ft_print_combn(int nb_digits)
{
	short 	digits[nb_digits];
	char 	out;
	short 	i;
   	i = 0;
	while(i < nb_digits)
	{
		digits[i] = i;
		i += 1;
	}
	i = 0;
	while (i < nb_digits)
	{
		out = digits[i] + '0';
		// write(1, &out, 1);		
		i += 1;
	}
	proceed(digits, 0, nb_digits);
}

int main(void) 
{
	ft_print_combn(2);
}
