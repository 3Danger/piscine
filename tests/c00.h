#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "../libs/minunit/minunit.h"
#include "../includes/ob.h"
#include "../includes/c00.h"


char	*strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}

void	test_ft_putchar()
{
	char c;

	c = 0;
	while (1)
	{
		c += 1;
		ft_putchar(c);
		if (c == 127)
			break ;
	}
	//write(1, "o", 1);
}
void	true_function()
{
	char c;

	c = 0;
	while (1)
	{
		c += 1;
		write(1, &c, 1);
		if (c == 127)
			break ;
	}
}
MU_TEST(t_ft_putchar) 
{
	char	*exp;
	char	*got;

	exp = ob(true_function);
	got = ob(test_ft_putchar);
	mu_assert_string_eq(exp, got);
}
MU_TEST(t_ft_print_alphabet)
{
	mu_assert_string_eq(ob(ft_print_alphabet), "abcdefghijklmnopqrstuvwxyz");
}

MU_TEST(t_ft_print_reverse_alphabet)
{
	char	*out;

	out = ob(ft_print_alphabet);
	strrev(out);
	mu_assert_string_eq(out, ob(ft_print_reverse_alphabet));
}

MU_TEST(t_ft_print_numbers)
{
	mu_assert_string_eq(ob(ft_print_numbers), "0123456789");
}



MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(t_ft_putchar);
	MU_RUN_TEST(t_ft_print_alphabet);
	MU_RUN_TEST(t_ft_print_reverse_alphabet);
	MU_RUN_TEST(t_ft_print_numbers);
}

void	testc00()
{

	MU_RUN_SUITE(test_suite);
}

