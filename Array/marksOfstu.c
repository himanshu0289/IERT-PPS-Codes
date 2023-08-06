//Q:- WAP to show than which stu their marks are less 35out of 100 adn also their roll nu.
// note:- their roll no. are based on indecing.....
#include<stdio.h>
int main(){
    int n;
    printf("Enter the total num of students :  ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter their marks : \n");
    for(int i=1;i<n+1;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n+1;i++){
        if(arr[i]<=35){
        printf("\nRoll Nu. : %d and Marks : %d ",i,arr[i]);
        
        }
    }
        return 0;
}