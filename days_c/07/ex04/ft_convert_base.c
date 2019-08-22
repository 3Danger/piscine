/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_convert_base.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/23 00:08:38 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/23 00:53:56 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_indexof(char *src, char n)
{
	int		i;

	i = 0;
	while (src[i])
	{
		if (src[i] == n)
			return (i);
		i += 1;
	}
	return (-1);
}


char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	out[30];
	int		is_negative;
	int		i;
	int		y;

	is_negative = *nbr == '-';
	i = 0;
	while (nbr[i])
	{
		i += 1;
	}
	y = 0;
	while (i > 0)
	{
		out[y++] = base_from[ft_indexof(base_to, nbr[i])]
	}
}
