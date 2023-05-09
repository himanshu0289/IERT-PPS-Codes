#include<stdio.h>
#include<conio.h>
int main(){
 int a,b,c,d,e,f,g;
  printf("Enter 1st Number:");
  scanf("%d",&a);
  printf("Enter 2nd Number:");
  scanf("%d",&b);
  c=a+b;
  d=a-b;
  e=a*b;
  f=a/b;
  printf("\n Sum of a and b is %d",c);         //run both of one
  printf("\n Sum of %d and %d is %d",a,b,c);

   printf("\n Substraction of a and b is %d",d);
  printf("\n Substraction of %d and %d is %d",a,b,d);

   printf("\n Multiplication of a and b is %d",e);
  printf("\n Multiplication of %d and %d is %d",a,b,e);

   printf("\n Devision of a and b is %d",f);
  printf("\n Devision of %d and %d is %d",a,b,f);

   
  
 return 0;
}
