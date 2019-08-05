unsigned int	ft_strlcpy(char *dst, char *src, unsigned int size) 
{
	unsigned int	i;
	unsigned int	out;

	i = 0;
	while (i < size - 1)
	{
		dst[i] = src[i];
		if (!src[i])
		{
			i += 1;
			break;
		}
		i += 1;
	}
	dst[i] = '\0';
	out = i;
	while (i < size - 1)
	{
		dst[i] = '\0';
		i += 1;
	}
	return out;
}
