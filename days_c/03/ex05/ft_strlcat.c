/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/07 23:29:43 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/08 00:09:25 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_superlen(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int		i;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = ft_superlen(dest);
	src_len = ft_superlen(src);
	if (dest_len <= size)
		return (src_len + size);
	i = -1;
	while (dest_len + ++i < size - 1 && src[i] != '\0')
		dest[dest_len + i] = src[i];
	if (dest_len > size)
		return (src_len + size);
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
