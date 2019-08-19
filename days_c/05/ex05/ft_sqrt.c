/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_sqrt.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/10 21:26:42 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/19 22:19:36 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int		i;

	i = nb;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	i = i % 2 == 0 ? i - 1 : i - 2;
	while (i > 1)
		if (nb % i == 0)
			return (0);
		else
			i -= 2;
	return (1);
}
