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

int		ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (!s1[i])
			return (0);
		i += 1;
	}
	return (s1[i] - s2[i]);
}

void	bubul(char **tab, int n)
{
	int 	i;
	int		j;
	char	*t;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n - 1)	
		{
			if (strcmp(tab[i], tab[i + 1]) < 0)
			{
				t = tab [i + 1];
				tab[i + 1] = tab[i];
				tab[i] = t;
			}
		}
	}
}

int		main(int argc, char **argv)
{
	unsigned int	i;
	unsigned int	y;
	char			*toto[argc - 1];
	char			*swp;


	i = 1;
	while (1 < argc)
	{
		toto[i - 1] = argv[i];
		i += 1;
	}
	bubul(argv, argc);
	i = 0;
	while (i < argc)
	{
		printf("%s", toto[i]);
	}
}
