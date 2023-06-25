#include<stdio.h>
void swap(int *a,int *b){
    int temp;
    temp = *a; // temp = 2
    *a = *b; // a = 9
    *b = temp; // b = 2
    return ;
}
int main(){
    int a , b;
    printf("Enter 1st Number :");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);
     printf("Before Swapping \n a : %d \n b : %d \n",a,b);
    swap(&a,&b);
    printf("After Swapping \n a : %d \n b : %d",a,b);
    return 0;
}