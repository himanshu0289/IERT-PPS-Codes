// display this AP- 4,7,10,13,16...upto 'n'th term
// An= A + (N-1)*d  == 4 + (N-1)3 == 3N+1
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter a Num :");
    scanf("%d",&n);
   for(int i =4;i<=(3*n+1);i=i+3){
    printf("%d ",i);
   }
    return 0;
}