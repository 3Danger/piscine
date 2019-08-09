#include <unistd.h>

void	recc_putnbr_base(int nbr, char *base, unsigned int basen)
{
	unsigned int	iu;

	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	iu = (unsigned int) nbr;
	if (iu > (basen - 1))	
	{
		recc_putnbr_base(iu / basen, base, basen);
		recc_putnbr_base(iu % basen, base, basen);
	}
	else
	{
		write(1, &base[iu], 1);
	}
}

int	check_for_dble(char *str)
{
	unsigned int	tmp[127];
	unsigned int	i;

	i = 0;
	while (i < 127)
		tmp[i++] = 0;
	i = 0;
	while(str[i])
	{
		tmp[(unsigned short) str[i]] += 1;
		if (tmp[(unsigned short) str[i]] > 1)
			return (1);
		i += 1;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	base_i;

	base_i = 0;
	while (base[base_i])
	{
		if ((base[base_i] > 'z' ||  base[base_i] < 'a') 
		&& (base[base_i] > 'Z' || base[base_i] < 'A') 
		&& (base[base_i] < '0' && base[base_i] > '9'))
			return ;
		base_i += 1;
	}
	if (base_i <= 1 || check_for_dble(base))
		return ;
	recc_putnbr_base(nbr, base, base_i);
}
