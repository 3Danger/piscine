/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_memory.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/05 13:19:51 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/05 14:08:06 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

typedef enum {false, true} bool;

struct memory_region
{
	char*			data;
	int				size;
};

const char	*HEX = "0123456789abcdef";

int	ft_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i += 1;
	}
	return i;
}

void	ft_str_rev(char *str, int len)
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

void	ft_reccursive_itohex(unsigned int nb, char* out, unsigned int i, bool prefix)
{
	unsigned int	quotient;
	unsigned int	rest;
	int				z;

	quotient = nb / 16;
	rest = nb % 16;

	out[i] = HEX[rest];
	if (quotient == 0)
	{
		z = 1;
		if (prefix)
		{
			out[i + z++] = '0';
			out[i + z++] = '1';	
		}
		out[i + z++] = '\0';
		ft_str_rev(out, ft_str_len(out));
	}
	else
	{
		ft_reccursive_itohex(quotient, out, i + 1, prefix);
	}	
}

void ft_putstr(char *str)
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
	ft_reccursive_itohex( (int) memory.data, addr_hex, 0, true);
	nbz = 16 - ft_str_len(addr_hex) - 1;
	while (nbz > 0)
	{
		write(1, "0", 1);
		nbz -= 1;
	}
	ft_putstr(addr_hex);
	write(1, ": ", 2);
	nbz = 0;
	while (nbz < memory.size)
	{
		tmpi = memory.data[nbz];
		ft_reccursive_itohex(tmpi, tmp, 0, false);
		ft_putstr(tmp);
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
		write(1, &memory.data[nbz], 1);
		nbz += 1;
	}
	write(1, "\n", 1);
}

void	ft_print_memory(void *addr, unsigned int size)
{
	unsigned int			i;
	unsigned int			current_size;
	struct memory_region	current_mem;
	bool					is_end;
	int						next_addr_add;

	i = 0;
	current_size = size;
	next_addr_add = 0;
	while (true)
	{	
		is_end = current_size < 16;
		current_mem.data = addr + next_addr_add;
		current_mem.size = (is_end) ? (16 - i) : 16;
		ft_display_memory_region(current_mem);
		if (is_end) 
		{
			break;
		}	
		current_size -= 16;
		i += 1;
		is_end = current_size < 16;
		next_addr_add = is_end ? 16 - current_size : 16;
	}
}

int		main(void)
{
	char *toto = "Bomjour les aminches ototkfesj opawj fojawdo ajwo djawp ajw djaw";
	ft_print_memory(toto, 18);
}
