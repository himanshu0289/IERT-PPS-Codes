// Q- WAP to print entire number between 1 to 300
#include <stdio.h>
#include <stdbool.h>

int main() {
    int i, j;
    bool isPrime;

    printf("Prime numbers between 1 and 300 are: ");

    for(i = 2; i <= 300; i++) {
        isPrime = true;

        for(j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if(isPrime == true)
            printf("%d |", i);
    }

    return 0;
}
