/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/22 16:56:22 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/22 16:59:58 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_strlen(char *src)
{
	unsigned int 	i;

	i = 0;
	while (src[i])
	{
		i += 1;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char			*out;
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = ft_strlen(src);
	out = malloc(src_len * sizeof(char));
	while (src[i])
	{
		out[i] = src[i];
		i += 1;
	}
	out[i] = '\0';
	return (out);
}
