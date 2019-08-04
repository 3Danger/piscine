const int	ASCII_CAPITALIZE = 'A' - 'a';

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] += ASCII_CAPITALIZE;
		i += 1;
	}
	return str;
}
