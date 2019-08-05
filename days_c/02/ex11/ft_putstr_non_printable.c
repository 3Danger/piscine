/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putstr_non_printable.c                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/05 11:11:23 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/05 17:37:47 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

const char	*HEX = "0123456789abcdef";

int	ft_str_len2(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i += 1;
	}
	return i;
}

void	ft_str_rev2(char *str, int len)
{
	char			out[len];
	int	i;

	i = len - 1;
	while (i >= 0)
	{
		out[len - i - 1] = str[i];
		i -= 1;
	}
	i += 1;
	while (i < len)	
	{
		str[i] = out[i];
		i += 1;
	}
	str[i] = '\0';
}

void	ft_reccursive_itohex2(unsigned int nb, char* out, unsigned int i)
{
	unsigned int	quotient;
	unsigned int	rest;

	quotient = nb / 16;
	rest = nb % 16;

	out[i] = HEX[rest];
	if (quotient == 0)
	{
		out[i + 1] = '\0';
		ft_str_rev2(out, ft_str_len2(out));
	}
	else
	{
		ft_reccursive_itohex2(quotient, out, i + 1);
	}	
}

void ft_putstr2(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i += 1;
	}
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;
	char			hex_tmp[3];

	i = 0;
	while (str[i])
	{
		if (str[i] < '!' || str[i] > '~')
		{
			write(1, "\\", 1);
			ft_reccursive_itohex2(str[i], hex_tmp, 0);
			ft_putstr2(hex_tmp);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i += 1;
	}
}
