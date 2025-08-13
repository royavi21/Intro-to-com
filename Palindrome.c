#include <stdio.h>

int main() {
    int n, original, reverse = 0, digit;
                                                /*Avijit Roy;
                                                ID: 12250120719*/
    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }

    if (reverse == original)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
