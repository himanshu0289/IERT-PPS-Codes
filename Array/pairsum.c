//Q:- Find the total num of pairs in the arr whose sum is equal to the given value x.
#include<stdio.h>
#include<conio.h>
int main(){
    int arr[8] = {1,2,3,4,5,6,7,8};
    int n = 12;
    int count = 0;
    for(int i=0;i<8;i++){
         for(int j=i+1;j<8;j++){
            if(arr[i]+arr[j]==n){
                count++;
                printf("pair is : (%d,%d)\n",arr[i],arr[j]);
            }          
        }
    }
    printf("Total pair : %d",count);
    return 0;
}