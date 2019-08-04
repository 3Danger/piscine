/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_sort_int_tab.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/03 17:42:03 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/03 17:42:03 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	current_size;
	int	i;
	int	tmp;

	if (size == 1)
	{
		return;
	}
	current_size = size - 1;
	while (current_size >= 0)
	{
		i = 0;
		while (i < current_size)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i += 1;
		}
		current_size -= 1;
	}
}
