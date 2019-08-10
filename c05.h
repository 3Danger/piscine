int	ft_iterative_factorial(int nb)
{
	int i;
	int x;

	if (nb < 0)
		return (0);
	x = 1;
	i = 1;
	while (i <= nb)
	{
		x *= i;
		i += 1;
	}
	return (x);
}

int	ft_reccursive_factorial(int nb)
{
	if (nb == 0 || nb == 1)
		return (nb);
	else if (nb < 0)
		return (0);
	else
		return (nb * ft_reccursive_factorial(nb - 1));
}

int	ft_iterative_power(int nb,int power)
{
	int i = 0;
	int x = 1;
	int isn = 0;

	if (power < 0)
	{
		isn = 1;
		power *= -1;
	}
	while (i < power)
	{
		x *= nb;
		i += 1;
	}
	return (isn ? 0 : x);
}

int	ft_reccursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	if (power < 0)
		return (0);
	return (nb * ft_reccursive_power(nb, power - 1));
}

int	ft_fibonacci(int index)
{
	if (index == 0 || index == 1)
		return (index);
	if (index < 0)
		return (-1);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		return (0);	
	while (i < nb)
		if (i * i == nb)
			return (i);
		else
			i += 1;
	return (0);
}


int	ft_is_prime(int nb)
{
	int 	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
		if (nb % i == 0)
			return (0);
		else
			i += 1;
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	while (1)
		if (ft_is_prime(i))
			return (i);
		else if (i == 2147483647)
			break ;
		else
			i += 1;
	return (0);
}


void	ft_display_columns(char * columns)
{
	while (*columns)	
		write(1, columns++, 1);
	write(1, "\n", 1);	
}

void	ft_recc_display_columns(char * columns)
{
	if (!*columns)	
	{
		write(1, "\n", 1);
		return ;
	}
	else
		write(1, columns, 1);
	ft_display_columns(columns + 1);
}

int	ft_check_diagonals(char *columns)
{
	int	x;
	int	y;
	int	x2;
	int	y2;

	y = 0;
	while (y < 10)
	{
		x = columns[y] - '0';	
		
		y2 = 0;
		while (y2 < 10)
		{
			x2 = columns[y2] - '0';
	
			if ((x != x2 && y2 != y) && (x + y == x2 + y2 || x - y == x2 - y2))
			{
			//	printf("%i %i | %i %i\n",x, y, x2, y2);
				return (0);
			}
			y2 += 1;
		}
		y += 1;
	}
	return (1);
}
/*
int	ft_recc_check_all_neq(char *columns)
{
	int	i;
	int	cond;

	if (!*columns)
		return (1);
	else
	{	
		cond = 1;
		i = 1;
		while (*(columns + i ) && cond)
		{
			cond = cond && (*(columns + i) != *columns);
			i += 1;
		}
		return (cond && ft_check_all_neq(columns + 1));
	}
}
*/

int	ft_check_all_neq(char *columns)
{
	int	y;
	int	i;
	int	cond;

	y = 0;
	cond = 1;
	while(columns[y] && cond)
	{
		i = 1;
		while (columns[y + i])
		{
			cond = cond && (columns[y + i] != columns[y]);
			i += 1;
		}
		y += 1;;
		
	}
	return (cond);
}
int	ft_increment_columns(char * columns)
{
	int	i;

	//*(columns + 9) = ((*(columns + 9) - '0' + 3) % 10) + '0';
	i = 9;
	while (i >= 0)
		if (*(columns + i) < '9')
			return (++*(columns + i));
		else
			*(columns + i--) = '0';
	return (0);
}

int	ft_ten_queens_puzzle(void)
{
	char 	columns[11] = "0257948136\0";
	int	results;

	results = 0;
	while (1)
	{
		if (0 || (ft_check_diagonals(columns) && 
		ft_check_all_neq(columns) && ++results))
			ft_display_columns(columns);
		if(!ft_increment_columns(columns))	
			break ;
	}
	return (results);
}
