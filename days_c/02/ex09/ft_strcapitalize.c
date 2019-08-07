/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcapitalize.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/05 19:25:37 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/07 10:24:56 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

const int g_ascii_capitalize = 'A' - 'a';

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;
	unsigned int	previous_was_not_alphanum;

	previous_was_not_alphanum = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (previous_was_not_alphanum)
				str[i] += g_ascii_capitalize;
			previous_was_not_alphanum = 0;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] -= g_ascii_capitalize;
			previous_was_not_alphanum = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			previous_was_not_alphanum = 0;
		else
			previous_was_not_alphanum = 1;
		i += 1;
	}
	return (str);
}
