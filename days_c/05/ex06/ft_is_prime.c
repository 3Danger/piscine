/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_is_prime.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/10 21:27:15 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/20 01:22:19 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int		sqrt;
	int		a;
	int		b;
	int		k;

	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3 || nb == 5 || nb == 7)
		return (1);
	if (nb == 4 || nb == 6 || nb % 2 == 0 || nb % 3 == 0)
		return (0);
	sqrt = ft_sqrt(nb);
	a = 0;
	b = 0;
	k = 1;
	while (b < sqrt)
	{
		a = (6 * k) - 1;
		b = (6 * k) + 1;
		if (nb % a == 0 || nb % b == 0)
			return (0);
		k += 1;
	}
	return (1);
}
