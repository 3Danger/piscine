#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "../libs/minunit/minunit.h"
#include "../includes/c03.h"


MU_TEST(t_ft_strncmp)
{
	mu_assert(ft_strncmp("abcd", "abcde", 3) ==  0, "strncmp compares pas n");
	
	mu_assert(ft_strncmp("abc", "abe", 3) ==  -2, "strncmp fails to compare n-1st first");
}


MU_TEST(t_ft_strcmp)
{
	mu_assert(ft_strcmp("abcd", "abcde") ==  strcmp("abcd", "abcde"), "strncmp compares pas n");
	
	mu_assert(ft_strcmp("abc", "abe") ==  strcmp("abc", "abe"), "strncmp fails to compare n-1st first");
}



MU_TEST(t_ft_strcat)
{

//	char out[23];
//	char out2[23];
//	mu_assert_int_eq(ft_strcat(out2, "123456"), strcat(out, "123456"));
//	mu_assert_string_eq(out2, out);
}

MU_TEST(t_ft_strncat)
{
//
//	char out[23];
//	char out2[23];
//	mu_assert_int_eq(ft_strncat(out2, "123456", 3), strncat(out, "123456", 3));
//	mu_assert_string_eq(out2, out);
}

MU_TEST(t_ft_strstr)
{

}

MU_TEST(t_ft_strlcat)
{
/*	char 	b[32];
	memcpy(b, "abc\0\0\0x\0", 8);	
	mu_assert(ft_strlcat(b, "123", sizeof b) == 6, "length error");
	mu_assert_string_eq(b, "abc123");
	memcpy(b, "abc\0\0\0x\0", 8);
	mu_assert(ft_strlcat(b, "123", 6) == 6, "length error");
	mu_assert_string_eq(b, "abc12");
	memcpy(b, "abc\0\0\0x\0", 8);
	mu_assert(ft_strlcat(b, "123", 4) == 6, "length error");
	mu_assert_string_eq(b, "abc");
	memcpy(b, "abc\0\0\0x\0", 8);
	mu_assert(ft_strlcat(b, "123", 3) == 6, "length error");
	mu_assert_string_eq(b, "abc");*/
}


MU_TEST_SUITE(test_suite_3)
{
	MU_RUN_TEST(t_ft_strcmp);
	MU_RUN_TEST(t_ft_strncmp);
	MU_RUN_TEST(t_ft_strcat);
	MU_RUN_TEST(t_ft_strncat);
	MU_RUN_TEST(t_ft_strstr);
	MU_RUN_TEST(t_ft_strlcat);
}

void	testc03()
{

	MU_RUN_SUITE(test_suite_3);
}

