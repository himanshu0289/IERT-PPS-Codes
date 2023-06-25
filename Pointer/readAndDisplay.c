#include<stdio.h>
#include<conio.h>
int main(){
   
   int n,i=0,arr[20];
   int *parr = arr;
      printf("Enter the Num of Elements : ");
      scanf("%d",&n);
   printf("Enter the Num : \n");
   for(i=0;i<n;i++){
    printf("Arr[%d] : ",i);
    scanf("%d",parr+i);
   }
   printf("the elements are : \n");
   for(i=0;i<n;i++){
    printf("Arr[%d] : %d\n",i,*(parr+i));
 }
    return 0;
}