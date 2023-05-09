// Ques:- WAP to demonstrate the use of printf anda canf statemetn to read and aprint value of variable if different data types..

#include<stdio.h>
#include<conio.h>
int main(){
int num;
float amt;
double pi;
long int pop_Of_India;
char a;
char msg[20];
printf("Enter a Number :");
scanf("%d",&num);
printf("Enter the value of Amount :");
scanf("%f",&amt);
printf("Enter the value of PI :");
scanf("%e",&pi);
printf("Enter the Population of India :");
scanf("%ld",&pop_Of_India);
printf("Enter first Character of your Name :");
scanf("%c",&a);
printf("Leave a message for me.... :");
scanf("%s",&msg);

printf("\n Num : %d \n AMOUNT : %f \n PI : %e \n POPULATION OF INDIA : %ld \n First Character of your Name : %c \n  Your\'s feedback : %s",num,amt,pop_Of_India,a,msg);


 return 0;
}
