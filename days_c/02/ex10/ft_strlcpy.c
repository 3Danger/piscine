size_t		ft_strlcpy(char *dst, char *src, size_t dstsize) 
{
	size_t	i;
	size_t out;

	i = 0;
	while (i < dstsize - 1)
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
	while (i < dstsize - 1)
	{
		dst[i] = '\0';
		i += 1;
	}
	return out;
}
