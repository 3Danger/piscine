/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_combn.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/03 13:05:57 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/03 15:51:57 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	pow(int x, int y)
{
	int xx;
	int yy;
	short negate;
	xx = x;
	yy = y;
	if (y < 0) {
		yy = y * -1;
	} else if (y == 0)	{
		return 1;
	}
    yy -= 1;	
	while (yy > 0)
	{
		xx *= xx;
		yy -= 1;
	}
	return xx;
}

void	ft_print_digits(short * digits, int n)
{
	char	current;
	int 	i; 
	i = 0;
	while (i < n)
	{
		current = '0' + digits[i];
		write(1, &current, 1);
		i++;
	}
}

int		check_all_digits(short *digits, int n)
{
	int		i;
	int 	s;
	
	i = 0;
	s = 1;
	while(i < n)
	{
		if (i > 0) {
			if (digits[i - 1] >= digits[i]) {
				s = 0;		
			}
		}
		i += 1;
	}
	return s;
}

void	ft_print_combn(int n)
{
	short 	digits[n];
	int		i;

	i = 0;
	while (i < n)
	{
		digits[i] = i;
		i++;
	}
	ft_print_digits(digits, n);
	

}

int		main(void)
{
	ft_print_combn(2);
	
	short digits[2];

	digits[0] = 7;
	digits[1] = 9;
	printf("%d ", check_all_digits(digits, 2));
}
