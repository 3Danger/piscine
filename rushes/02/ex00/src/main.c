/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/18 16:39:44 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/18 23:40:20 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "./../includes/string.h"
#include "./../includes/stdio.h"
#include "./../includes/dictionary.h"

char	*g_default_dict = "./dictionary/en.dict";

void		update(char **s1, char **s2, char **s3, char **s4)
{
	*s1 = ft_strdup(*s2);
	*s3 = ft_strdup(*s4);
}

int			analyse_in(char *in)
{
	unsigned int i;

	if (in == 0)
		return (0);
	in = ft_trim_begin(in);
	i = 0;
	while (in[i])
	{
		if (!ft_is_number(in[i]))
			return (0);
		i += 1;
	}
	return (1);
}

int			main(int argc, char **argv)
{
	char		*dictionary_buffer;
	char		*number_buffer;

	number_buffer = 0;
	if (argc == 1)
	{
		write(1, "Please enter a number: ", 23);
		number_buffer = ft_read_input((char)10, STDIN_FILENO);
		write(1, "Please enter a dictionary (press x if none): ", 45);
		dictionary_buffer = ft_read_input((char)10, STDIN_FILENO);
		if (dictionary_buffer[0] == 'x' && dictionary_buffer[1] == '\0')
			dictionary_buffer = ft_strdup(g_default_dict);
	}
	else if (argc == 2)
		update(&number_buffer, &argv[1], &dictionary_buffer, &g_default_dict);
	else if (argc == 3)
		update(&number_buffer, &argv[1], &dictionary_buffer, &argv[2]);
	else if (argc < 1 || argc > 3)
		write(1, "Error - Invalid argument count. \n", 33);
	if (argc >= 1 && argc <= 3 && !analyse_in(number_buffer))
		write(1, "Error - Invalid number given.", 29);
	else if (argc >= 1 && argc <= 3)
		ft_display_number(ft_atoi(number_buffer), dictionary_buffer);
	write(1, "\n", 1);
}
