/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/05 19:29:27 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/05 19:32:39 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dst, char *src, unsigned int size)
{
	unsigned int	i;

	if (size == 0)
		return (size);
	i = 0;
	while (i < size - 1)
	{
		dst[i] = src[i];
		if (!src[i])
		{
			i += 1;
			break ;
		}
		i += 1;
	}
	dst[i] = '\0';
	return (i);
}
