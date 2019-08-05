/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_memory.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/05 13:19:51 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/05 20:33:57 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

const char	*g_hext = "0123456789abcdef";

void	ft_putstr(char *str);

int		ft_str_len3(char *str)
{
	int	i;

	i = 0;
	while (str[++i])
	{
	}
	return (i);
}

void	ft_str_rev3(char *str, int len)
{
	char	out[len];
	int		i;

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

void	ft_reccursive_itohex3(unsigned int nb, char *out, unsigned int i,
		int prefix)
{
	unsigned int	quotient;
	unsigned int	rest;
	int				z;

	quotient = nb / 16;
	rest = nb % 16;
	out[i] = g_hext[rest];
	if (quotient == 0)
	{
		z = 1;
		if (prefix)
		{
			out[i + z++] = '0';
			out[i + z++] = '1';
		}
		out[i + z++] = '\0';
		ft_str_rev3(out, ft_str_len3(out));
	}
	else
	{
		ft_reccursive_itohex3(quotient, out, i + 1, prefix);
	}
}

void	ft_display_memory_region(char *data, int size)
{
	char	addr_hex[15];
	int		nbz;
	char	tmpi;
	char	tmp[3];

	ft_reccursive_itohex3((int)data, addr_hex, 0, 1);
	nbz = 16 - ft_str_len3(addr_hex) - 1;
	while (nbz > 0)
	{
		write(1, "0", 1);
		nbz -= 1;
	}
	ft_putstr(addr_hex);
	write(1, ": ", 2);
	nbz = 0;
	while (nbz < size)
	{
		tmpi = data[nbz];
		if (tmpi < 16)
		{
			write(1, "0", 1);
		}
		ft_reccursive_itohex3(tmpi, tmp, 0, 0);
		ft_putstr(tmp);
		nbz += 1;
		if (nbz % 2 == 0)
			write(1, " ", 1);
	}
	nbz = 16 - size;
	while (nbz > 0)
	{
		write(1, "  ", 2);
		if (nbz % 2 == 1)
			write(1, " ", 1);
		nbz -= 1;
	}
	write(1, " ", 1);
	nbz = 0;
	while (nbz < size)
	{
		tmpi = data[nbz] > '~' || data[nbz] < ' ' ?
			'.' : data[nbz];
		write(1, &tmpi, 1);
		nbz += 1;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int		i;
	int		remaining_size;
	char	*data;
	int		nsize;

	remaining_size = size;
	i = 0;
	while (remaining_size > 0)
	{
		nsize = remaining_size < 16 ? remaining_size : 16;
		data = addr + i;
		ft_display_memory_region(data, nsize);
		remaining_size -= 16;
		i += 16;
	}
	return (addr);
}
