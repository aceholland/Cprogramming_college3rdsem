#include <stdio.h>

int main() {
    long long n;
    int digit;
    int frequency[10] = {0};

    printf("Enter a number: ");
    scanf("%lld", &n);

    if (n == 0) {
        frequency[0] = 1;
    }

    if (n < 0) {
        n = -n;
    }

    while (n > 0) {
        digit = n % 10;
        frequency[digit]++;
        n /= 10;
    }

    printf("\nDigit Frequency:\n");

    for (int i = 0; i <= 9; i++) {
        if (frequency[i] > 0) {
            printf("%d -> %d times\n", i, frequency[i]);
        }
    }

    return 0;
}