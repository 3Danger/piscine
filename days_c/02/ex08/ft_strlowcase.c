/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlowcase.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/05 19:27:04 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/05 19:27:51 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

const short g_ascii_lowcase = 'a' - 'A';

char	*ft_strlowcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 'A' && str[i] < 'Z')
			str[i] += g_ascii_lowcase;
		i += 1;
	}
	return (str);
}
