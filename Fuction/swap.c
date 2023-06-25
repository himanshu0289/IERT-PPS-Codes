#include<stdio.h>

void ultiswap(int a,int b){
    a = a+b;
    b = a-b;
    a = a-b;
    printf("By Ultimate method Swapping is %d and %d ",a,b);
}
void swapp(int a,int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swapping The Input number is %d and %d  \n",a,b);

}
int main(){
    int a,b;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    printf("Before swapping The Input number is %d and %d  \n",a,b);
    swapp(a,b);
    ultiswap(a,b);
 
    return 0;
}