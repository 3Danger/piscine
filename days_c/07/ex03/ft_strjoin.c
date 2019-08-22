/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/22 22:11:58 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/22 23:12:20 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		i += 1;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int		dest_len;
	int		i;

	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[dest_len + i] = src[i];
		i += 1;
	}
	dest[dest_len + i] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		y;
	int		sep_len;
	int		final_size;
	char	*out;

	sep_len = ft_strlen(sep);
	final_size = 0;
	i = 0;
	while (i < size)
	{
		final_size += ft_strlen(strs[i]);
		i += 1;
	}
	out = malloc((sep_len * size - 1 + final_size) * sizeof(char));
	i = 0;
	while (i < size)
	{
		y = 0;
		out = ft_strcat(out, strs[i]);
		if (i < size - 1)
		{
			out = ft_strcat(out, strs[i]);
		}
	}
	return (out);
}
