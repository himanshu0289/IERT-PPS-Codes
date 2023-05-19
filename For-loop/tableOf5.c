//Q- Print the table of 'n'. Here 'n' is a integer which user will input?
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter a Num :");
    scanf("%d",&n);
   for(int i =1;i<=10;i=i+1){
    printf("%d \n",n*i);
   }
   
    return 0;
}