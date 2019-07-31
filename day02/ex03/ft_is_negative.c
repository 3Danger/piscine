// delete me before release
#include <unistd.h>
// delete me before release
void ft_put_char(char c) {
    write(1, &c, 1);
}

void ft_is_negative(int n) {
    ft_put_char(n>=0 ? 'P' : 'N');
}

// delete me before release
int main(void) {
    ft_is_negative(2);
    ft_is_negative(0);
    ft_is_negative(-2);
}