/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/05 19:29:27 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 08:48:26 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

unsigned int	ft_sizeme(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i += 1;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	src_len = ft_sizeme(src);
	i = 0;
	if (size == 0)
		return (src_len);
	while (i < size - 1)
	{
		dest[i] = src[i];
		if (!src[i])
		{
			i += 1;
			break ;
		}
		i += 1;
	}
	dest[i] = '\0';
	return (src_len);
}
