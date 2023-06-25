#include<stdio.h>
int main(){
    int a=5;
    int* x = &a;
    
    printf("%p \n",&x); // address of x
    printf("%p \n",&a); // address of a
    printf("%p \n",x); // address of a
    printf("%d \n",*x); // 5
    printf("%p \n\n",&x); // address of x
    *x = 7;
    printf("%d \n",a); // 7 a are changed...
    return 0;
}