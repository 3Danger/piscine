/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_numbers.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/01 19:42:34 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/05 18:28:12 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char current;

	current = '0';
	while (current <= '9')
	{
		write(1, &current, 1);
		current += 1;
	}
}
