main:
	cc -Werror -Wall -Wextra includes/*.h  src/*.c  && mv a.out rush-02 
sanitize:
	cc -Werror -Wall -Wextra -g3 -fsanitize=address includes/*.h  src/*.c && mv a.out rush-02
fclean:
	rm -rf *.out && rm -rf includes/*.gch  && rm -rf a.out.dSYM/
norme:
	norminette -R CheckForbiddenSourceHeader includes/ src/ && make main
