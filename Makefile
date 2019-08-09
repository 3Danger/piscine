norm:
	norminette days_c  && make main && ./a.out
main:
	gcc days_c/*/*/*.c main.c -Wall -Wextra -Werror && ./a.out
