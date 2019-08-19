/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   c03.h                                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/14 13:34:29 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/16 14:01:18 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "../includes/ob.h"
#include "../libs/minunit/minunit.h"
#include "../includes/c05.h"



MU_TEST(t_ft_iterative_factorial)
{
	mu_assert(ft_iterative_factorial(10) == 3628800, "error in factorial 10");
}

MU_TEST(t_ft_recursive_factorial)
{
	mu_assert(ft_recursive_factorial(10) == 3628800, "error in rec factorial 10");
}

MU_TEST(t_ft_iterative_power)
{
	mu_assert(ft_iterative_power(3,3) == 27, "error in iterative power");
}

MU_TEST(t_ft_recursive_power)
{
	mu_assert(ft_recursive_power(3,3) == 27, "error in recursive power");
}

MU_TEST(t_ft_fibonacci)
{
	mu_assert(ft_fibonacci(6) == 8, "error in fibonacci 8");
}

MU_TEST(t_ft_is_prime)
{
	mu_assert(ft_is_prime(7) == 1, "error in is prime");
	mu_assert(ft_is_prime(50) == 0, "error in is prime");
	mu_assert(ft_is_prime(-48964) == 0, "error in is prime");
	mu_assert(ft_is_prime(8489489) == 0, "error in is prime");
	mu_assert(ft_is_prime(7784512) == 0, "error in is prime");
	mu_assert(ft_is_prime(7123456) == 0, "error in is prime");
	mu_assert(ft_is_prime(7159753) == 0, "error in is prime");
	mu_assert(ft_is_prime(489746548) == 0, "error in is prime");
	mu_assert(ft_is_prime(723456) == 0, "error in is prime");
	mu_assert(ft_is_prime(7123456) == 0, "error in is prime");
	mu_assert(ft_is_prime(7789456) == 0, "error in is prime");
	mu_assert(ft_is_prime(7564231) == 1, "error in is prime");
	mu_assert(ft_is_prime(45642137) == 0, "error in is prime");
	mu_assert(ft_is_prime(78954647) == 0, "error in is prime");
	mu_assert(ft_is_prime(4561237) == 1, "error in is prime");
	mu_assert(ft_is_prime(745646) == 0, "error in is prime");
	mu_assert(ft_is_prime(7891567) == 0, "error in is prime");
	mu_assert(ft_is_prime(1234567) == 0, "error in is prime");
	mu_assert(ft_is_prime(14595519) == 0, "error in is prime");
}

MU_TEST(t_ft_find_next_prime)
{
	mu_assert(ft_find_next_prime(7) == 7, "error in find next prime 7");
	mu_assert(ft_find_next_prime(4561236) == 4561237, "error in find next prime 4561236");
	mu_assert(ft_find_next_prime(0) == 2, "error in find next prime 0");
}

MU_TEST(t_ft_sqrt)
{
	mu_assert(ft_sqrt(9) == 3, "error in sqrt 9");
}

MU_TEST(t_ft_teen_queens_puzzle)
{
	ft_ten_queens_puzzle();
}


int		count_words(char *haystack, char *delimiter)
{
	int		x;
	int		y;
	int		z;	

	int		words;
	words = 0;

	x = 0;
	while (haystack[x])
	{
		z += 1;
		y = 0;
		while (delimiter[y])
		{
			if (delimiter[y] == haystack[x])
			{
				words += 1;
				z  = 0;
				x += 1;
				break ;
			}
			y += 1;
		}
		x += 1;
	}
	if (z != 0)
		words += 1;
	return words;
}

void	ft_strncpy(char	*str, char*src, int n)
{
	int	i;

	i = 0;
	while (i < n && src[i])
	{
		str[i] = src[i];
		i += 1;
	}
	str[i] = '\0';
}

char	**ft_strsplit(char *haystack, char *delimiter)
{
	int		x;
	int		y;
	int		current_word = 0;
	int		current_word_len = 0;
	char	*current_word_begin = 0;

	int		nb_words;
	char	**array;
	
	nb_words = count_words(haystack, delimiter);
	printf("nb_words : %i\n", nb_words);
	array = malloc(nb_words * sizeof(char *));
	x = 0;
	while (haystack[x])
	{
		y = 0;
		if (current_word_len == 0)
			current_word_begin = &haystack[x];
		current_word_len += 1;
		while (delimiter[y])
		{
			if (delimiter[y] == haystack[x])
			{
				current_word_len -= 1;
				array[current_word] = malloc(sizeof(char) * current_word_len);
				ft_strncpy(array[current_word], current_word_begin, current_word_len);
				printf("%s %i\n", current_word_begin, current_word_len);
				current_word += 1;
				current_word_len = 0;
				x += 1;
				break ;
			}
			y += 1;
		}
		x += 1;
	}
	if (current_word_len > 0)
	{
		array[current_word] = malloc(sizeof(char) * current_word_len);
		ft_strncpy(array[current_word], current_word_begin, current_word_len);	
		current_word_len = 0;
	}
	return array;
}

MU_TEST_SUITE(test_suite_5)
{
	MU_RUN_TEST(t_ft_iterative_factorial);
	MU_RUN_TEST(t_ft_recursive_factorial);
	MU_RUN_TEST(t_ft_iterative_power);
	MU_RUN_TEST(t_ft_recursive_power);
	MU_RUN_TEST(t_ft_fibonacci);
	MU_RUN_TEST(t_ft_sqrt);
	MU_RUN_TEST(t_ft_is_prime);
	MU_RUN_TEST(t_ft_find_next_prime);
	MU_RUN_TEST(t_ft_teen_queens_puzzle);

	ft_strsplit("hellopata teavion", "p t");
	

	//printf("%s\n", out[0]);
	//printf("%s\n", out[1]);
	//printf("%s\n", out[2]);

}



void	testc05()
{

	MU_RUN_SUITE(test_suite_5);
}

