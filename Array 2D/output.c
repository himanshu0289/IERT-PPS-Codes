#include<stdio.h>
  
int main(){
    int r,c;
    printf("Enter no of rows : ");
    scanf("%d",&r);
    printf("Enter the no of Column : ");
    scanf("%d",&c);
    int arr[r][c];
    //take input 
    printf("Enter the elements : \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    //input print
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}