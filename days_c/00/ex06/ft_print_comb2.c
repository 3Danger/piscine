/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_comb2.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/01 23:52:49 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/05 17:32:32 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2_numbers(unsigned short n1, unsigned short n2)
{
	char out1;
	char out2;

	if (!(n1 == 0 && n2 == 1))
	{
		out1 = ',';
		write(1, &out1, 1);
		out1 = ' ';
		write(1, &out1, 1);
	}
	out2 = '0' + n1 % 10;
	n1 /= 10;
	out1 = '0' + n1 % 10;
	write(1, &out1, 1);
	write(1, &out2, 1);
	out1 = ' ';
	write(1, &out1, 1);
	out2 = '0' + n2 % 10;
	n2 /= 10;
	out1 = '0' + n2 % 10;
	write(1, &out1, 1);
	write(1, &out2, 1);
}

void	ft_print_comb2(void)
{
	unsigned short n1;
	unsigned short n2;

	n1 = 0;
	n2 = 1;
	while (n1 <= 98)
	{
		while (n2 <= 99)
		{
			if (n1 < n2)
			{
				ft_print_comb2_numbers(n1, n2);
			}
			n2 += 1;
		}
		n2 = 0;
		n1 += 1;
	}
	n1 = 0;
}
