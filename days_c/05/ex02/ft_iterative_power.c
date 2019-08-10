/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_iterative_power.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/10 21:23:22 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/10 21:23:38 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_iterative_power(int nb,int power)
{
	int i = 0;
	int x = 1;
	int isn = 0;

	if (power < 0)
	{
		isn = 1;
		power *= -1;
	}
	while (i < power)
	{
		x *= nb;
		i += 1;
	}
	return (isn ? 0 : x);
}
