/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/07 23:29:43 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/14 20:24:48 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */


int				ft_superstrlen(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = 0;
	while (dest[dest_len])
	{
		if (dest_len >= size)
			break ;
		dest_len += 1;
	}
	src_len = 0;
	while (src[src_len] && src_len < size - dest_len - 1)
	{
		dest[dest_len + src_len] = src[src_len];
		src_len += 1;
	}
	if (dest_len < size)
		dest[dest_len + src_len] = '\0';
	src_len = ft_superstrlen(src);
	return (dest_len + src_len);
}
