void ft_print_combn(int n) {
    char digits[n];
    char out;
    for(int i = 0; i < 9; i += 1) {
        digits[i] = '0' + i;
    }

    for(int i = 0; i < 9; i += 1) {
        write(1, &digits[i], 1);
    }

    char max_digits[n];
    for(int i = 0; i < n; i += 1) {
        max_digits[n - i - 1] = '9' - i;
    }

    for(int i = 0; i < n; i += 1) {
        write(1, &max_digits[i], 1);
    }


    int is_first = 0;
    while(digits[0] <= max_digits[0]) {
        while(digits[1] <= max_digits[1]) {
            while(n3 <= '9') {
                if(n1 < n2  && n2 < n3) {
                    if (is_first != 0) {
                        char out = ','; 
                        write(1, &out, 1);
                        out = ' '; 
                        write(1, &out, 1);
                    } else {
                        is_first=1;
                    }
                    if (n1 != n2 && n1 != n3 && n2 != n3 ) {
                        write(1, &n1, 1);
                        write(1, &n2, 1);
                        write(1, &n3, 1);
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

int main(void) {
    ft_print_combn(3);
}