//***Q:- WAP to copy the contents of one arr into another in the reverse order.
#include<stdio.h>
#include<conio.h>
void reverse(int arr[],)
    int st = 0;
    int end = 7;
  while(st<=end){
       int temp = arr[st];
        arr[st] = arr[end];
        arr[end] = temp;
        st++;
        end--;
       }
       return ;
}
int main(){
   int  arr[8] = {1,2,3,4,5,6,7,8};  
    reverse(arr);
    for(int i=0;i<8;i++){
       printf("%d ",arr[i]);
    }
    
    return 0;
}