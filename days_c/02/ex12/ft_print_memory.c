/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_memory.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/05 13:19:51 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/07 10:28:37 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

const char	*g_hext = "0123456789abcdef";

unsigned int	ft_strlenput(char *str, int put)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (put > 0)
			write(1, &str[i], 1);
		i += 1;
	}
	return (i);
}

void			ft_get_hexa(long n, char *str, unsigned int size)
{
	unsigned int	i;

	if (size == 0)
		return ;
	i = size - 1;
	while (1)
	{
		str[i] = '0';
		if (i == 0)
			break ;
		i -= 1;
	}
	i += 1;
	while (n > 0)
	{
		str[size - i - 1] = g_hext[n & 0xf];
		n >>= 4;
		i += 1;
	}
	str[size - 1] = '\0';
}

void			ft_putchar_non_printable(void *addr, unsigned int size)
{
	char			*ptr;
	unsigned int	i;

	ptr = addr;
	i = 0;
	while (i < size)
	{
		if (ptr[i] >= ' ' && ptr[i] <= '~')
			write(1, &ptr[i], 1);
		else
			write(1, ".", 1);
		i += 1;
	}
}

void			display_memory_region(void *addr, unsigned int size)
{
	char			str[6];
	unsigned int	occ;
	unsigned int	i;
	unsigned char	cc;

	occ = size > 16 ? 16 : size;
	i = 0;
	while (i < 16)
	{
		if (occ > i)
		{
			cc = (unsigned char)*((unsigned char*)(addr + i));
			str[0] = g_hext[cc / 16];
			str[1] = g_hext[cc % 16];
			str[2] = '\0';
			ft_strlenput(str, 2);
		}
		else
			write(1, "  ", 2);
		i += 1;
		if (i % 2 == 0)
			write(1, " ", 1);
	}
	ft_putchar_non_printable(addr, occ);
}

void			*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	r_size;
	void			*current_addr;
	char			addrc[16];

	current_addr = addr;
	r_size = size;
	while (r_size > 0)
	{
		ft_get_hexa((long)current_addr, addrc, 16);
		ft_strlenput(addrc, 1);
		write(1, ": ", 2);
		display_memory_region(current_addr, r_size);
		if (r_size <= 16)
			break ;
		write(1, "\n", 1);
		current_addr += 16;
		r_size = r_size > 16 ? r_size - 16 : r_size % 16;
	}
	return (addr);
}
