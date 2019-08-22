/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_sort_params.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/11 03:02:32 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/20 17:40:25 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = -1;
	while (!++i || (s1[i] == s2[i] && s1[i] && s2[i]))
		;
	return (s1[i] - s2[i]);
}

void		ft_putarg(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
		write(1, &str[i], 1);
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int		i;
	char		*swap;
	int		exit;

	exit = 0;
	while (!exit)
	{
		i = 0;
		exit = 1;
		while (++i < argc - 1)
			if (0 < ft_strcmp(argv[i], argv[i + 1]))
			{
				swap = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = swap;
				exit = 0;
			}
	}
	i = 0;
	while (++i < argc)
		ft_putarg(argv[i]);
	return (0);
}
