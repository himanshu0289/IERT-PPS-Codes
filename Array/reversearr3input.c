//***Q:- WAP to copy the contents of one arr into same arr  in the reverse order.
#include<stdio.h>
#include<conio.h>
 void display(int arr [], int n ){ // 8 7 6 5 4 3 2 1
     for(int i=0;i<n;i++){
       printf("%d ",arr[i]);
    }
    return ;
 }
void reverse(int arr[],int n ){ // 8 7 6 5 4 3 2 1
  for(int st=0,end=7;st<end;st++,end--){
       int temp = arr[st];
        arr[st] = arr[end];
        arr[end] = temp;   
       }
       return ;
}
void input(int arr [],int n){
     for(int i=0;i<n;i++){
   scanf("%d\n",arr[i]);
   }
    return;
}
int main(){
    int n;
    printf("Enter Array of size : ");
    scanf("%d",&n);
   int arr[n] ;  // = {1,2,3,4,5,6,7,8};  
   printf("Enter the series : ");
    input(arr,n);
    reverse(arr,n);
    display(arr,n);
    
    return 0;
}