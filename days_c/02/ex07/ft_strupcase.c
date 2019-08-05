const int ASCII_UPCASE = 'a' - 'A';

char	*ft_strupcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= ASCII_UPCASE;

		i += 1;
	}

	return str;
}
