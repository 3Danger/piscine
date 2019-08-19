/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_iterative_factorial.c                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/10 21:21:28 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/19 20:54:30 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int x;

	if (nb < 0)
		return (0);
	x = 1;
	i = 1;
	while (i <= nb)
	{
		x *= i;
		i += 1;
	}
	return (x);
}

int		main()
{
	printf("%i", ft_iterative_factorial(8));
}
