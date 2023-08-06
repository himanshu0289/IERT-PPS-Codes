//Q:- WAP to copy the contents of one arr into same  in the reverse order.
#include<stdio.h>
#include<conio.h>
int main(){
//    int  arr[8] = {1,2,3,4,5,6,7,8};
//     int rev[8];
//     for(int i=0;i<8;i++){
//         rev[i] = arr[7-i];
//        printf("%d ",rev[i]);
//     }
    int n;
    printf("Enter the array size : ");
    scanf("%d",&n);
    int arr[n];
    int rev[n];
    printf("Enter the num : ");

    //take input
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]); // 1 2 3 4 5
    }
    //print output 
    printf("Before reverse the array is : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]); // 1 2 3 4 5
    }
    printf("\nAfter reversing the array : ");
    // for(int i=n-1;i>=0;i--){ //copying in same array 
    //     printf("%d ",arr[i]); // 5 4 3 2 1
    // }
     
     for(int i=0;i<n;i++){ // copying an another array 
        rev[i] = arr[n-1-i];
        printf("%d ",rev[i]); // 5 4 3 2 1
     }


    return 0;
}