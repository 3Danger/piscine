typedef enum {false, true} bool;

int	ft_str_is_lowercase(char *str)
{
	unsigned int	i;

	i = 0;
	while(str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
			return false;
		i += 1;
	}
	return true;
}
