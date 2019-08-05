norm:
	norminette days_c  && make main
main:
	gcc days_c/*/*/*.c days_c/main.c -Wall -Wextra -Werror
