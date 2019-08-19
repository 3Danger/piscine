/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_find_next_prime.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/10 21:27:39 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/19 12:46:41 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_is_prime2(int nb)
{
	int		i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i * i <= nb)
		if (nb % i == 0)
			return (0);
		else
			i += 1;
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 2)
		return (2);
	i = nb % 2 == 0 ? nb + 1 : nb;
	while (1)
		if (ft_is_prime2(i))
			return (i);
		else if (i == 2147483647)
			break ;
		else
			i += 2;
	return (0);
}
