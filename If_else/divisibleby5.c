//Q- WAP to take input and declair that area divisible by 5
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
printf("Enter a Number : ");
scanf("%d",&n);
if(n%5==0){  
    printf("Divisible by 5");
}else 
{
    printf("Not divisible by 5");
}
return 0;
}