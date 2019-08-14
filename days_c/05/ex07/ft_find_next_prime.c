/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_find_next_prime.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/10 21:27:39 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/14 20:43:08 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_is_prime2(int nb)
{
	int		i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
		if (nb % i == 0)
			return (0);
		else
			i += 1;
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	while (1)
		if (ft_is_prime2(i))
			return (i);
		else if (i == 2147483647)
			break ;
		else
			i += 1;
	return (0);
}
