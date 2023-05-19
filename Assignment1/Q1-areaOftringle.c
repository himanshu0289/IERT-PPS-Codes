// WAP to calculate the area of triangle using Hero's Formula...
// s = (a+b+c)/2;
//
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    float a,b,c, area ,S;
    printf("Enter the length of three side of Trianle :");
    scanf("%f %f %f",&a,&b,&c);
    S = (a+b+c)/2;
    printf(" The value of S is : %f",S);
     area = sqrt(S*(S-a)*(S-b)*(S-c));
    printf("\n  and Area of triangle : %f", area );
    return 0;

}