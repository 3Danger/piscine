/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr_base.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/10 23:35:37 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/15 14:20:32 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void		recc_putnbr_base(int nbr, char *base, unsigned int baselen)
{
	unsigned int	iu;

	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	iu = (unsigned int)nbr;
	if (iu > (baselen - 1))
	{
		recc_putnbr_base(iu / baselen, base, baselen);
		recc_putnbr_base(iu % baselen, base, baselen);
	}
	else
	{
		write(1, &base[iu], 1);
	}
}

int			check_for_dble(char *str)
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

void		ft_putnbr_base(int nbr, char *base)
{
	unsigned int	base_i;

	base_i = 0;
	if (!base[0] || !base[1])
		return ;
	while (base[base_i])
	{
		if (((base[base_i] >= '\t' && base[base_i] <= '\r') || base[base_i]
			== ' ') || (base[base_i] == '+' || base[base_i] == '-'))
			return ;
		base_i += 1;
	}
	if (base_i <= 1 || check_for_dble(base))
		return ;
	recc_putnbr_base(nbr, base, base_i);
}
