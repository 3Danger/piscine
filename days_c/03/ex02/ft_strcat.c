/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcat.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/07 22:21:23 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/14 14:31:32 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_strsuperlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i += 1;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int		dest_len;
	int		i;

	dest_len = ft_strsuperlen(dest);
	i = -1;
	while (src[++i])
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
