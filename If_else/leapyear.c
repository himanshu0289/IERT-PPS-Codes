#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
printf("Enter a year : ");
scanf("%d",&n);

    if(n%4==0){// even Num
    printf("Input Year is Leap year.");
    }
else 
{
    printf("Input year is not a leap year.");
}
return 0;
}