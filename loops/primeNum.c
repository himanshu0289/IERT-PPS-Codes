// WAP to check if a num is prime or not..
//prime num : 1,2,3,5,7,11,13,17,19,23
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter a Num :");
    scanf("%d",&n);
   for(int i =2;i<=n-1;i++){
    if(n%i==0){
        printf("%d is Composite Number \n",i);
      break;
    } 
    printf("%d is Prime Number ",n);
    break;
    
   }
   
    return 0;
}