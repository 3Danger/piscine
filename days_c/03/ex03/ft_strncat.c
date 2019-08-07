/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/07 22:40:35 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/07 23:00:25 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_len;
	unsigned int	src_i;

	dest_len = 0;
	while (dest[dest_len])
	{
		dest_len += 1;
	}
	src_i = 0;
	while (src_i < nb)
	{
		dest[dest_len + src_i] = src[src_i];
		src_i += 1;
	}
	dest[dest_len + src_i] = '\0';
	return (dest);
}
