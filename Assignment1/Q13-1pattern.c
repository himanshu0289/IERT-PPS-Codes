#include<stdio.h>
int main(){
    int n;
    for(int i=3;i>=1;i--){
        for(int j=i;j>=1;j--){
            printf(" %d ",j);
        }
        printf(" \n");
    }
    return 0;
}