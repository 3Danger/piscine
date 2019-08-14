/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/11 13:20:02 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 13:37:44 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */


void	putstr(char * str)
{
	int	i;

	i = 0;
		while(str[i])
			write(1, &str[i++], 1);
}

int		main(int argc, char **argv)
{
	int		i;

	while (i < argc)	
		putstr(argv[i++]);
	
	int		grid[6][6];
	int 	x;
	int		y;

	x = 0;
	y = 0;

}
