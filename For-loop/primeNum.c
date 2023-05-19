// WAP to check if a num is prime or not..
//prime num : 1,2,3,5,7,11,13,17,19,23
#include<stdio.h>
#include<conio.h>
int main()
{
    int n ,a=0;
    printf("Enter a Num :");
    scanf("%d",&n);
   for(int i =2;i<=n-1;i++){
    if(n%i==0){ // i is factor of n
      a = 1;
      break;
    }

    // if(n%i==0){
    //     printf("%d is Composite Number \n",i);
    //   break;
    // } 
    // printf("%d is Prime Number ",n);
    // break;
    
   }
   if(n==1) printf("1 neither prime or neither composite");
  else if(a==0) printf("The given is Prime \n");
   else printf("The given num is composite \n");
   
    return 0;
}