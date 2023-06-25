#include<stdio.h>
#include<conio.h>
int main(){
    int a = 25;
    int* x = &a;
    int** y = &x; // double
 //   int** y = &x;
    printf("%p \n",&x); // address of x
    printf("%p \n",y); //  address of x
    printf("%d \n",*x); // value of a [%d] -->25
    printf("%p\n",*y); // y contain's add value -->address of x
    printf("%d \n",**y); // value of a --> 25 [showing something error]
    printf("%d \n",a); // value of a -->25
    return 0;
}