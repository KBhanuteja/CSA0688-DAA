#include <stdio.h>

int main() {
    int dividend, divisor, quotient = 0, remainder = 0;

    printf("Enter dividend: ");
    scanf("%d", &dividend);
 printf("Enter divisor: ");
    scanf("%d", &divisor);

    int shift = sizeof(int) * 8; // Number of bits in an integer

    while (shift > 0) {
        remainder = (remainder << 1) | ((dividend >> (shift - 1)) & 1);
        if (remainder >= divisor) {
            remainder -= divisor;
            quotient = (quotient << 1) | 1;
        } else {
            quotient = quotient << 1;
        }
        shift--;
    }

    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);
    return 0;
}