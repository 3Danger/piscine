/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_sqrt.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/10 21:26:42 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/20 01:24:48 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		i;

	if (nb <= 0)
		return (0);
	i = 0;
	while (i * i <= nb && i <= 46340)
		if (i * i == nb)
			return (i);
		else
			i += 1;
	return (0);
}
