norm:
	norminette days_c  && make main
main:
	gcc days_c/*/*/*.c main.c -Wall -Wextra -Werror
