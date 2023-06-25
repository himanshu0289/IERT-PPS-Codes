//   1
//   2 2
//   3 3 3
//   4 4 4 4
//   5 5 5 5 5
#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter a Number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=6-i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}