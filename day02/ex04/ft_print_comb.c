// delete me before release
#include <unistd.h>
// delete me before release
void ft_put_char(char c) {
    write(1, &c, 1);
}

void ft_print_comb(void) {
    char n1 = '0', n2 = '1', n3 = '2';
    int is_first = 0;
    while(n1 <= '7') {
        while(n2 <= '8') {
            while(n3 <= '9') {
                if(n1 <= n2 || n2 <= n3) {
                    if (is_first != 0) {
                        ft_put_char(',');
                        ft_put_char(' ');
                    } else {
                        is_first=1;
                    }
                    if (n1 != n2 && n1 != n3 && n2 != n3 ) {
                        ft_put_char(n1);
                        ft_put_char(n2);
                        ft_put_char(n3);
                    }
                }
                n3 = n3 + 1;
            }
            n3 = '0';
            n2 = n2 + 1;
        }
        n2 = '0';
        n1 = n1 + 1;
    }
}

// delete me before release
int main(void) {
    ft_print_comb();
}