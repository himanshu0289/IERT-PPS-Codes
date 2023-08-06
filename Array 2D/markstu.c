//Q:-WAP to read a 2D array marks which stores marks of student i 3 subjects.
// WAP to display the highest marks in each subjects and respectively student roll nu....
#include<stdio.h>
int main(){ // error
    int r,c,i,j,max;
    printf("Enter the student num : ");
    scanf("%d",&r);
    printf("Enter the Nu of Subjects :");
    scanf("%d",&c);
    int arr[r][c];
    //take input
    for(int i=0;i<r;i++){  
        printf("Enter marks obtains by student %d : \n",i);
        // 0--> phy '; 1 --> chem;  2 --> maths
        for(int j=0;j<c;j++){ //
            printf("arr[%d][%d] : ",i,j); //
            scanf("%d",&arr[i][j]);
        }
    }
    //print output
    for(int i=0;i<r;i++){
        max = arr[0][j];
        for(int j=0;j<c;j++){
            if(max<arr[i][j]) 
             max = arr[i][j];
        }
        printf("\nthe highest marks obtains in subject %d is : %d ",i,max);   
    }
    return 0;
}