//Q: Count the number of elements in igven array greater than a given number x.
#include<stdio.h>
#include<conio.h>
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int x = 4,count=0;
    for(int i=0;i<7;i++){
        if(arr[i]>4) count ++;
    }
    printf("%d numbers are greater than %d",count,x);
    return 0;
}