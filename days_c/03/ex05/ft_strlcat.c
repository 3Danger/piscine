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
	unsigned int	dest_len;
	unsigned int	max_iter;
	unsigned int	x;

	dest_len = 0;
	while (dest[dest_len])
	{
		dest_len += 1;
	}

	max_iter = size + dest_len - 1;
	x = 0;
	while (x < max_iter)
	{
		dest[dest_len + x - 1] = src[x];
		x += 1;
	}
	dest[dest_len + x] = '\0';
	return (dest_len + x - 1);
}
