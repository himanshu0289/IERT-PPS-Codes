#include<stdio.h>

 
 float div(int a,int b){
    return a/b;
 }
 int pro(int a,int b){
    return a*b;
 }
 int sub(int a,int b){
    return a-b;
 }
 int sum(int a,int b){
    return a+b;
 }

int main(){
    int a,b;
    printf("Enter 1st Number : ");
    scanf("%d",&a);
    printf("Enter 2nd Number : ");
    scanf("%d",&b);
    printf("The Sum of %d and %d is %d \n" ,a,b,sum(a,b));
    printf("The substraction of %d and %d is %d \n",a,b,sub(a,b));
    printf("The product of %d and %d is %d \n",a,b,pro(a,b));
    printf("The division of %d and %d is %f \n",a,b,div(a,b));
    return 0;

}