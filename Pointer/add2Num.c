//Q:- WAP to add two floating point num .the result should only two digits after the decimal.
#include<stdio.h>
#include<conio.h>
int main(){
      float a,b,sum=0;
      float *pa = &a, *pb = &b;
      float *psum = &sum;
      printf("Enter two num :");
      scanf("%f %f",pa,pb);
      *psum= *pa+ *pb;
      printf("Addition of %f and %f is : %.2lf",*pa,*pb,*psum);
    return 0;
}