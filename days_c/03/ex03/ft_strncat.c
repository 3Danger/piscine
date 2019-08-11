/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/11 09:48:01 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 09:59:54 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_len;
	unsigned int	src_i;

	dest_len = 0;
	while (dest[dest_len])
	{
		dest_len += 1;
	}
	src_i = 0;
	while (src_i < nb)
	{
		dest[dest_len + src_i] = src[src_i];
		src_i += 1;
	}
	dest[dest_len + src_i] = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>

int		main()
{
	char	s1[13] = "hello";
	char	s2[] = "world I AN WAY TOO LONG";

	char 	s3[13] = "hello";
	char	s4[] = "world I AN WAY TOO LONG";

//	printf("ft: %s unix: %s\n", ft_strncat(s1, s2, 12), strncat(s3, s4, 12));
	strncat(s3, s4, 12);

	char	s8[20] = "hello";
	char	s9[] = "wwpkjaw";

	char 	s10[20] = "hello";
	char	s11[] = "dawdawd";

	printf("ft: %s unix: %s\n" , ft_strncat(s8, s9, 0),  strncat(s10, s11, 0));

	char	s12[20] = "";
	char	s13[] = "world";

	char 	s14[20] = "";
	char	s15[] = "world";

	printf("ft: %s unix: %s\n" , ft_strncat(s12, s13, 0),  strncat(s14, s15, 0));
}
