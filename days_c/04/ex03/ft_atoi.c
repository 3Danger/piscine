int	ft_atoi(char *str)
{
	unsigned int	minus_n;
	unsigned int	output;
	unsigned int	i;

	i = 0;
	output = 0;
	minus_n = 0;
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '+' && str[i] != '-' 
		&& (str[i] > '9' || str[i] < '0'))
			break ;
		if (str[i] == '-')
			minus_n += 1;
		if (str[i] <= '9' && str[i] >= '0')
			output = output * 10 + str[i] - '0';
		i += 1;
	}
	if (minus_n % 2 == 0)
		return (output);
	else
		return (output * -1);
}
