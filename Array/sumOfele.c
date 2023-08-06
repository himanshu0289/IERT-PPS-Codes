//Q:- Calculate the sum of all the elements in the given array ...
#include<stdio.h>
int main(){
    int n,sum=0,pdt=1;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //Sum
    for(int i=0;i<n;i++){
         sum += arr[i];
    }
     printf("Sum : %d",sum);

     //Product
    //    for(int i=0;i<n;i++){
    //     pdt *= arr[i];
    // }
    //  printf("Product : %d",pdt);

    return 0;
}