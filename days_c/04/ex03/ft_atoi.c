/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/10 23:37:46 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/15 19:45:00 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	unsigned int	minus_n;
	unsigned int	output;
	int				i;

	i = -1;
	output = 0;
	minus_n = 1;
	while (str[++i] == ' ' || str[i] == '\n' || str[i] == '\r' || str[i] == '\v'
			|| str[i] == '\t' || str[i] == '\f')
		;
	while (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			minus_n *= -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		output += str[i] - '0';
		if (str[i + 1] >= '0' && str[i + 1] <= '9')
		{
			output *= 10;
		}
		i += 1;
	}
	return (output * minus_n);
}
