/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   c03.h                                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/14 13:34:29 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/15 20:04:13 by mfaussur    ###    #+. /#+    ###.fr     */
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

MU_TEST()
{

}

MU_TEST_SUITE(test_suite_5)
{
	MU_RUN_TEST(t_ft_iterative_factorial);
	MU_RUN_TEST(t_ft_recursive_factorial);
}



void	testc05()
{

	MU_RUN_SUITE(test_suite_5);
}

