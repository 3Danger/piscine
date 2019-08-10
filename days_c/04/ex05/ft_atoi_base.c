/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi_base.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/10 23:28:52 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/10 23:33:36 by mfaussur    ###    #+. /#+    ###.fr     */
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

int		ft_atoi_base(char *str, char *base)
{
	unsigned int	base_i;
	unsigned int	minus_n;
	unsigned int	output;
	unsigned int	i;

	base_i = -1;
	while (base[++base_i])
		if ((base[base_i] > 'z' || base[base_i] < 'a')
		&& (base[base_i] > 'Z' || base[base_i] < 'A')
		&& (base[base_i] < '0' && base[base_i] > '9'))
			return (0);
	if (base_i <= 1 || check_for_dble2(base))
		return (0);
	i = -1;
	output = 0;
	minus_n = 0;
	while (str[++i])
		if (str[i] != ' ' && str[i] != '+' && str[i] != '-'
		&& (str[i] > '9' || str[i] < '0'))
			break ;
		else if (str[i] == '-')
			minus_n += 1;
		else if (str[i] <= '9' && str[i] >= '0')
			output = output * base_i + indexof(str[i], base);
	return (minus_n % 2 == 0 ? output : output * -1);
}
