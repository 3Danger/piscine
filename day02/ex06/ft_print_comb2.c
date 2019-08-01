void ft_print_comb2(void) {
    short n1 = 0, n2 = 1;
    int is_first = 0;

    while(n1 <= 98) {
        while(n2 <= 99) {
            if(n1 < n2) {
                if (is_first != 0) {
                    char out = ','; 
                    write(1, &out, 1);
                    out = ' '; 
                    write(1, &out, 1);
                } else {
                    is_first=1;
                }
                if (n1 != n2 ) {

                    short n_cpy = n1;
                    char last_digit = '0' + n_cpy % 10;
                    n_cpy /= 10;
                    char first_digit = '0' + n_cpy % 10;

                    write(1 , &first_digit, 1);
                    write(1 , &last_digit, 1);

                    char space = ' ';
                    write(1, &space, 1);

                    n_cpy = n2;
                    last_digit = '0' + n_cpy % 10;
                    n_cpy /= 10;
                    first_digit = '0' + n_cpy % 10;

                    write(1 , &first_digit, 1);
                    write(1 , &last_digit, 1);
                }
            }
            n2 = n2 + 1;
        }
        n2 = 0;
        n1 = n1 + 1;
    }
    n1 = 0;
}

// delete me before release
int main(void) {

    ft_print_comb2();
}