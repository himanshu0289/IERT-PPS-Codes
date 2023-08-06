#include<stdio.h>
#include<conio.h>
int main(){
   
   int n,i=0;
      printf("Enter the Array size : ");
      scanf("%d",&n);
      int arr[n];
   printf("Enter the Num : \n");
   for(i=0;i<n;i++){
    printf("Arr[%d] : ",i);
    scanf("%d",&arr[i]);
   }
   printf("the elements are : \n");
   for(i=0;i<n;i++){
    printf("Arr[%d] : %d\n",i,arr[i]);
 }
    return 0;
}