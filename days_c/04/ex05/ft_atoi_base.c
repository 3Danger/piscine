/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi_base.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/10 23:28:52 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/15 20:07:44 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

int		check_for_dble2(char *str)
{
	unsigned int	tmp[127];
	unsigned int	i;

	i = 0;
	while (i < 127)
		tmp[i++] = 0;
	i = 0;
	while (str[i])
	{
		tmp[(unsigned short)str[i]] += 1;
		if (tmp[(unsigned short)str[i]] > 1)
			return (1);
		i += 1;
	}
	return (0);
}

int		indexof(char str, char *arr)
{
	unsigned int i;

	i = 0;
	while (arr[i])
	{
		if (arr[i] == str)
			return (i);
		i += 1;
	}
	return (0);
}

int		is_in_base(char c, char *base)
{
	int		i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (1);
		i += 1;
	}
	return (0);
}

int		is_base_ok(char *base, int *base_i)
{
	*base_i = 0;
	while (base[++*base_i])
		if (((base[*base_i] >= '\t' && base[*base_i] <= '\r') || base[*base_i]
			== ' ') || (base[*base_i] == '+' || base[*base_i] == '-'))
			return (0);
	if (*base_i <= 1 || check_for_dble2(base))
		return (0);
	else
		return (1);
}

int		ft_atoi_base(char *str, char *base)
{
	int				base_i;
	unsigned int	minus_n;
	unsigned int	output;
	unsigned int	i;

	base_i = 0;
	if (!is_base_ok(base, &base_i))
		return (0);
	i = -1;
	output = 0;
	minus_n = 1;
	while (str[++i] == ' ' || str[i] == '\r' || str[i] == '\v' || str[i] == '\n'
		|| str[i] == '\f' || str[i] == '\t')
		;
	while (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			minus_n *= -1;
	while (is_in_base(str[i], base))
	{
		output += indexof(str[i], base);
		if (is_in_base(str[i + 1], base))
			output *= base_i;
		i += 1;
	}
	return (output);
}
