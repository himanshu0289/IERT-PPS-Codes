//Q:-*** Find the total num of triplets whose sum is equal to the given value x.
#include<stdio.h>
#include<conio.h>
int main(){
    int arr[8] = {1,2,3,4,5,6,7,8};
    int n; //12
    printf("Enter requrement num : "); //12
    scanf("%d",&n);
    int count = 0;
    for(int i=0;i<8;i++){
         for(int j=i+1;j<8;j++){
            for(int k=j+1;k<8;k++){
                if(arr[i]+arr[j]+arr[k]==n){
                    count++;
                    printf("pair is : (%d,%d,%d)\n",arr[i],arr[j],arr[k]);
                }
            }
            
            }          
        }
    
    printf("Total pair is : %d",count);
    return 0;
}