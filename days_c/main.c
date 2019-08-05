/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/05 17:15:41 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/05 18:11:59 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

const int	MAX_LEN = 88;

void	ft_putchar(char c);
void	ft_print_alphabet();
void	ft_print_reverse_alphabet();
void	ft_print_numbers();
void	ft_is_negative(int n);
void	ft_print_comb();
void	ft_print_comb2();
void	ft_putnbr(int nb);
void	ft_print_combn(int n);

int		main(void)
{
	write(1, "======= c00 =======\n", 21);
	write(1, "ex00: testing ft_putchar('c') and got: ", 39);
	ft_putchar('c');	
	write(1, "\n", 1);
	write(1, "ex01: testing ft_print_alphabet() and got: ", 43);
	ft_print_alphabet();	
	write(1, "\n", 1);
	write(1, "ex02: testing ft_print_reverse_alphabet() and got: ", 51);
	ft_print_reverse_alphabet();	
	write(1, "\n", 1);
	write(1, "ex03: testing ft_print_numbers() and got: ", 42);
	ft_print_numbers();	
	write(1, "\n", 1);
	write(1, "ex04: testing ft_is_negative(42) and got: ", 42);
	ft_is_negative(42);	
	write(1, "\n", 1);
	write(1, "ex04: testing ft_is_negative(-42) and got: ", 43);
	ft_is_negative(-42);	
	write(1, "\n", 1);
	write(1, "ex05: testing ft_print_comb() and got: ", 39);
	ft_print_comb();	
	write(1, "\n", 1);
	write(1, "ex06: testing ft_print_comb2() and got: ", 40);
	ft_print_comb2();	
	write(1, "\n", 1);
	write(1, "ex07: testing ft_putnbr(42) and got: ", 37);
	ft_putnbr(42);	
	write(1, "\n", 1);
	write(1, "ex07: testing ft_putnbr(-42) and got: ", 38);
	ft_putnbr(-42);	
	write(1, "\n", 1);
	write(1, "ex08: testing ft_print_combn(3) and got: ", 41);
	ft_print_combn(3);	
	write(1, "\n", 1);
}
