void ft_putnbr(int nb) {
    int digit_number = 0;
    for (int i = nb; i > 0; i /= 10) {
        digit_number++;
    }
    char digits[digit_number];
    int current_digit = 0;
    for (int i = nb; i > 0; i /= 10) {
        digits[current_digit] = '0' + (i % 10);
        current_digit++;
    }

    for (int i = digit_number; i > 0; i -= 1) {
        write(1, &digits[i - 1], 1);
    }
}

int main(void) {
    ft_putnbr(588);
}