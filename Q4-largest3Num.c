//Q- WAP to find the largest of three numbers using nested if else.  @himanshu0289
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
printf("Enter first Numbers:");
scanf("%d",&a);
printf("Enter second  Numbers:");
scanf("%d",&b);
printf("Enter third Numbers:");
scanf("%d",&c);

if(a>b){
    if(a>c){
    printf("%d is greater than %d and %d",a,b,c);
    }else{
        printf("%d is grater than %d and %d",c,a,b);
    }
}else if(b>c){
    printf("%d is greater than %d and %d",b,a,c);
    }else{
        printf("%d is greater than %d and %d",c,a,b);
    }

 
return 0;
}