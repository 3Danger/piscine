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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	stop_at;
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = 0;
	src_len = 0;
	stop_at = size - 1;
	while (dest[dest_len])
		dest_len += 1;
	while (src[src_len])
		src_len += 1;
	if (dest_len >= stop_at)
		return (src_len + size);
	i = 0;
	while (dest_len + i < stop_at)
	{
		dest[dest_len + i] = src[i];
		i += 1;
	}
	if (dest_len >= stop_at)
		return (src_len + size);
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
