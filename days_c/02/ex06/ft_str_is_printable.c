typedef enum {false, true} bool;

int	ft_str_is_printable(char *str)
{
	unsigned int	i;
	
	i = 0;
	while(str[i])
	{
		if (str[i] < '!' || str[i] > '~')
			return false;
		i += 1;
	}
	return true;
}
