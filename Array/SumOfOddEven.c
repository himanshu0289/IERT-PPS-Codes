//Q:- find the difference b/n the sum of elements at even indices to the sum of elements at odd indices.
#include<stdio.h>
#include<conio.h>
int main()
{
    int sumEven=0,sumOdd=0;
    int arr[7] = {1,4,5,2,8,6,4};
    for(int i=0;i<7;i++){
        if(i%2==0){
            sumEven += arr[i]; // 1+5+8+4=18
        }else{
            sumOdd += arr[i]; // 4+2+6 =12
        }
    }
     printf("Diff is : %d",sumEven-sumOdd); // 18-12=6
    return 0;

}