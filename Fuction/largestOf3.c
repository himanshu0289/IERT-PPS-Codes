#include<stdio.h>
int largeNum(int a,int b,int c){
    if(a>b && a>c) return a;
    else if (b>a && b>c) return b;
    else return c;
}
int main(){
    int a,b,c;
    printf("Enter 1st Number : ");
    scanf("%d",&a);
    printf("Enter 2nd Number : ");
    scanf("%d",&b);
    printf("Enter 3rd Number : ");
    scanf("%d",&c);
    int num = largeNum(a,b,c);
    printf("The Largest Number is %d  ",num);
     return 0;
}