//Q:- WAP to copy the contents of one arr into another in the reverse order.
#include<stdio.h>
#include<conio.h>
int main(){
   int  arr[8] = {1,2,3,4,5,6,7,8};
    int rev[8];
    for(int i=0;i<8;i++){
        rev[i] = arr[7-i];
       printf("%d ",rev[i]);
    }
    
    return 0;
}