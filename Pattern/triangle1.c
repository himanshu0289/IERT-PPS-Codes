// | *
// | * * 
// | * * * 
// | * * * * 
// | * * * * * 

#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j;
    printf("Enter a Number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){ // no of rows
      
        for(j=1;j<=i;j++){ //no of column
            printf("* ");
        }
          printf("\n");
    }

    return 0;
}