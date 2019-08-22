/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_range.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/22 17:00:26 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/22 17:47:15 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		*ft_range(int min, int max)
{
	int		nb;
	int		*range;
	int		i;

	if (min >= max)
		return (0);
	nb = max - min;
	range = malloc(nb * sizeof(int));
	i = min;
	while (i < max)
	{
		range[min - i] = i;
		i += 1;
	}
	return (range);
}
