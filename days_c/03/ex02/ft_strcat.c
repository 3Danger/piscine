/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcat.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/07 22:21:23 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/07 22:39:42 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

// dest = s1 src = s2
char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	y;
	
	i = 0;
	while (dest[++i])
	{
	}
	y = 0;
	while(src[y])
	{
		dest[i + y] = src[y];
		y += 1;
	}
	dest[i + y] =  '\0';
	return (dest);
}
