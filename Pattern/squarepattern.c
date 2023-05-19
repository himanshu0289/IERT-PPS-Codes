#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){ // no of line rows--> i
        for(int j=1;j<=n;j++){ // no of line  column --> j
            printf(" * ");
        }
        printf("\n");
    }

    return 0;
}