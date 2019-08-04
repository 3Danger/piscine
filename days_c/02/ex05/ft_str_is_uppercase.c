typedef enum  {false, true} bool;

int	ft_str_is_uppercase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return false;
		i += 1;
	}
	return true;
}
