/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_memory.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/05 13:19:51 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/05 17:41:50 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

typedef enum {false, true} bool;

struct memory_region
{
	char*			data;
	int				size;
};

const char	*HEXT = "0123456789abcdef";

int	ft_str_len3(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i += 1;
	}
	return i;
}

void	ft_str_rev3(char *str, int len)
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

void	ft_reccursive_itohex3(unsigned int nb, char* out, unsigned int i, bool prefix)
{
	unsigned int	quotient;
	unsigned int	rest;
	int				z;

	quotient = nb / 16;
	rest = nb % 16;

	out[i] = HEXT[rest];
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

void ft_putstr3(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i += 1;
	}
}

void	ft_display_memory_region(struct memory_region memory)
{
	char addr_hex[15];
	int	nbz;
	char tmpi;
	char tmp[3];
	ft_reccursive_itohex3( (int) memory.data, addr_hex, 0, true);
	nbz = 16 - ft_str_len3(addr_hex) - 1;
	while (nbz > 0)
	{
		write(1, "0", 1);
		nbz -= 1;
	}
	ft_putstr3(addr_hex);
	write(1, ": ", 2);
	nbz = 0;
	while (nbz < memory.size)
	{
		tmpi = memory.data[nbz];
		if (tmpi < 16)
		{
			write(1, "0", 1);
		}
		ft_reccursive_itohex3(tmpi, tmp, 0, false);
		ft_putstr3(tmp);
		nbz += 1;
		if (nbz % 2 == 0)
			write(1, " ", 1);
	}

	nbz = 16 - memory.size;
	while (nbz > 0)
	{
		write(1, "  ", 2);
		if (nbz % 2  == 1)
			write(1, " ", 1);
		nbz -= 1;
	}
	write(1, " ", 1);
	nbz = 0;
	while (nbz < memory.size)
	{	
		tmpi = memory.data[nbz] > '~' || memory.data[nbz] < ' ' ? 
			'.' : memory.data[nbz];
		write(1, &tmpi, 1);
		nbz += 1;
	}
	write(1, "\n", 1);
}

void 	*ft_print_memory(void *addr, unsigned int size)
{
	struct memory_region mem;
	int	i;
	int	remaining_size;

	remaining_size = size;
	i = 0;
	while (remaining_size > 0)
	{
		mem.size = remaining_size < 16 ? remaining_size : 16;
		mem.data = addr + i;
		ft_display_memory_region(mem);

		remaining_size -= 16;
		i += 16;
	}
	return addr;
}
