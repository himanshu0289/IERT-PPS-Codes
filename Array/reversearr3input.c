//***Q:- WAP to copy the contents of one arr into another in the reverse order.
#include<stdio.h>
#include<conio.h>
 void display(int arr []){
     for(int i=0;i<n;i++){
       printf("%d ",arr[i]);
    }
    return ;
 }
void reverse(int arr[]){
  for(int st=0,end=7;st<end;st++,end--){
       int temp = arr[st];
        arr[st] = arr[end];
        arr[end] = temp;   
       }
       return ;
}
void input(int arr []){
     for(int i=0;i<8;i++){
   scanf("%d\n",arr[i]);
   }
    return;
}
int main(){
    int n;
   int  arr [n] ;  // = {1,2,3,4,5,6,7,8};  
   printf("Enter the series : ");
    input(arr);
    reverse(arr);
    display(arr);
    
    return 0;
}