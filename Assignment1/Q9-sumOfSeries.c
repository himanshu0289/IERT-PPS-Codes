// Q- WAP tp generate sum of series 1! + 2! + 3! + 4!+ -------------------n!
#include <stdio.h>

int main() {
    int n, i;
    int fact = 1;
    int sum = 0;

    printf("Enter a positive integer: "); //5
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fact = fact*i;
        sum = sum + fact;
    }

    printf("Sum of factorials from 1 to %d is: %d", n, sum); //153
    return 0;
}
