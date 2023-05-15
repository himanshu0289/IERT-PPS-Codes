//WAP to take input by user and determine that are absolute number.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
printf("Enter a Number : ");
scanf("%d",&n);
if(n<0){  //  Num is negative-9
    n = n*(-1);
}
    printf("The absolute value is : %d",n);

return 0;
}