#include <stdio.h>

int main() {
    int n, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;           // get last digit
        reverse = reverse * 10 + digit; // add to reverse
        n /= 10;                  // remove last digit
    }

    printf("Reversed number: %d\n", reverse);
    return 0;
}
