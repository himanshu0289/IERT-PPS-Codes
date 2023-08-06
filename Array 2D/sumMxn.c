#include<stdio.h>



void takeinput(int a[][],int r,int c){
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",a[i][j]);
        }
    }
    return;
}
int main(){
    int r1,c1,r2,c2,rsum,csum;
    printf("Enter num of row of 1st matrix :");
    scanf("%d%d",&r1,&c1);
     printf("Enter num of row of 2nd matrix :");
    scanf("%d%d",&r2,&c2);
    int mat1[r1][c1];
    int mat2[r2][c2];
    if(r1!=r2 || c1!=c2){
        printf("row and column are must be same..");
        exit();
    }
    rsum=r1;
    csum=c1;
    printf("Enter the element of 1st matrix : ");
    takeinput(mat1,r1,c1);
    printf("Enter the element of 2nd matrix : ");
    takeinput(mat2,r2,c2);
    // sumOfmat(mat1,mat2,r1,c1,r2,c2);
    // printf("Sum of mat1 and mat2 : ");
    // display(sumOfmat());

    return 0;
}