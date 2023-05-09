// WAP to demonstrate the use of printf statement to print value of variables of differernt dta types.

#include<stdio.h>
#include<conio.h>
int main()
{
 int num=7;
 float amt=123.45;
 char ch = 'A';
 double pi = 3.1415;
 long int pop_Of_India =  100000000;
 char msg[] = "@Himanshu0289";

 printf("\n Num : %d \n AMT : %f \n CHAR : %c \n PI : %e \n POP_OF_INDIA : %ld \n MSG : %s ",num,amt,ch,pi, pop_Of_India,msg);
printf(" \n  Himanshu  \b Anshu  \n \t \t Himanshu  \n himanshu  \v \f himanshu  \n \r himanshu");
return 0;
}