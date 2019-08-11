/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_rev_params.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/11 02:54:42 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 02:57:20 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int 	a;
	int		i;

	a = argc - 1;
	while (a > 0)
	{
		i = 0;
		while (argv[a][i])
		{
			write(1, &argv[a][i], 1);
			i += 1;
		}
		write(1, "\n", 1);
		a -= 1;
	}
}
