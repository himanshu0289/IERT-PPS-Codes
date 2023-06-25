//Q:-  Find the 2nd largest element in the given array.
// bruat forse method
#include<stdio.h>
#include<conio.h>
#include<limits.h>
int main(){
    int arr[8] = {1,2,3,4,5,6,7,8};
    int max = INT_MIN;
    int Smax = INT_MIN;
    for(int i=0;i<8;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    for(int i=0;i<8;i++){
        if(arr[i]!=max && Smax<arr[i]){
            Smax = arr[i];
        }
    }
    printf("Max is %d",Smax);
    return 0;
}