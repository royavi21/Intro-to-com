#include <stdio.h>
/*Avijit Roy;
ID: 12250120719*/       
int main() {
    int N, i;
    int first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &N);

    printf("Fibonacci Series: ");

    if (N >= 1) printf("%d ", first);
    if (N >= 2) printf("%d ", second);

    for (i = 3; i <= N; i++) {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }

    printf("\n"); 
    return 0;
}
