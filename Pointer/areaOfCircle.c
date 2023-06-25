#include<stdio.h>
#include<conio.h>
int main(){
    float r, area=0.0;
    float *pr = &r, *parea = &area;
    printf("Enter the radious Of cirlce :");
    scanf("%f",pr); // pr--> address assign ke liye
    float pi = 3.1415;
     *parea = pi*(*pr)*(*pr); // *pr --> address ki value take karne ke liye
    printf("Area of Circle : %.2lf",*parea);
    return 0;
}