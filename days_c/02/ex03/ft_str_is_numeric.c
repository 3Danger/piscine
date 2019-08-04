enum {false, true} bool;

int	ft_str_is_numeric(char *str)
{
	unsigned int	i;

	i = 0;
	while(str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return false;
		i += 1;
	}
	return true;
}
