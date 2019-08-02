/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_combn3.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/02 02:33:39 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/02 03:01:03 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void ft_putbnr(int digits_nb, int nb)
{
	    char    digits[digits_nb];
		int     current_digit;
		int     i;

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

int		get_digits_nb(int nb)
{
	    int     i;
	    int     digits_nb;

	    i = nb;
	    digits_nb = 0;
	    while (i > 0)
	    {
	        digits_nb += 1;
		    i /= 10;
		}
		return digits_nb;

}

short* get_digits(int nb)
{
	int digits_nb = get_digits_nb(nb);
	short digits[digits_nb];
	int nb_cp = nb;
	int i = 0;
	while(nb_cp > 0) {
		digits[digits_nb - i] = nb_cp % 10;
		nb_cp /= 10;
		i += 1;
	}

	return digits;
}

void    ft_putnbr(int nb)
{
	    int     digits_nb = get_digits_nb(nb);
		ft_putbnr(digits_nb, nb);
}

int main(void)
{
	int x = 22;

	int y = 10;

	int i = 0;
	while(i < x) {
		y = y * 10;
		i++;
	}

	i = 0;
	while(i < y) {
		ft_putnbr(i);
		i++;
	}

	short* digits = get_digits(500);
	ft_putnbr(digits[0]);
}
