//Q:-  Find the 2nd largest element in the given array.
#include<stdio.h>
#include<conio.h>
#include<limits.h>
int main(){
    int arr[8] = {1,2,13,8,9,3,13,4};
    int max = INT_MIN;
    int Smax = INT_MIN;
    for(int i=0;i<8;i++){
        if(max<arr[i]){ // 9
            Smax = max; // Smax is now previous max
            max = arr[i]; // max is new max
        }else if(Smax<arr[i] && max!=arr[i]){ // max > arr[i]
            Smax = arr[i]; // 8
        }
        

    }
    printf("Max is : %d\n",max);
    printf("2nd Max is : %d ",Smax);
    return 0;
}