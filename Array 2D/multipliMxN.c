#include<stdio.h>



void takeinput(int a[][10],int r,int c){
    printf("enter the element : \n");
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
    void mulOfmat(int m1[][10],int m2[][10],
    int res[][10],int r1,int r2,int c1,int c2){
        // intialize element of mat mult to 0
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                res[i][j]=0;
            }
        }
    
        // multiplied m1 to m2  and store it res
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                for(int k=0;k<c1;k++){
                    res[i][j] += m1[i][k]*m2[k][j];
                }
            }
        }
    }


void display(int res[][10],int r,int c){
    printf("Output matrix : \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int r1,c1,r2,c2;
    printf("Enter num of row and col of 1st matrix :");
    scanf("%d%d",&r1,&c1);
     printf("Enter num of row and col of 2nd matrix :");
    scanf("%d%d",&r2,&c2);
    int mat1[10][10];
    int mat2[10][10];
    int res[10][10];
    if(c1!=r2){
        printf("Error!");
    }
    printf("Enter the element of 1st matrix : ");
    takeinput(mat1,r1,c1);
    printf("Enter the element of 2nd matrix : ");
    takeinput(mat2,r2,c2);
    mulOfmat(mat1,mat2,res,r1,c1,r2,c2);
    printf("Mul of mat1 and mat2 : ");
    display(res,r1,c2);
    
    return 0;
}