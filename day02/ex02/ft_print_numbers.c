// delete me before release
#include <unistd.h>
// delete me before release
void ft_put_char(char c) {
    write(1, &c, 1);
}

void ft_print_numbers(void) {
    for (char current = '0'; current <= '9'; current=current+1) {
        ft_put_char(current);
    }
}
// delete me before release
int main(void) {
    ft_print_numbers();
}