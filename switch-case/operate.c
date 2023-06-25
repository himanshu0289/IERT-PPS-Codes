#include<stdio.h>
int main(){
    int n,a,b,x,y;
     printf("Enter the value of a :"); // a = 2
    scanf("%d",&a);
    printf("Enter the value of x :"); // x= 3
    scanf("%d",&x);
    printf("Enter the value of b :"); // b=1
    scanf("%d",&b);
     printf("Enter the value of n i.e 1,2,3,4 :"); // 
    scanf("%d",&n);

    switch (n)
    {
    case 1:
         y= (a*x) % b ; //
    printf("y : %d",y); // 0
        break;
    case 2:
         y= (a*x*x + b*b);
        printf("%d",y); // 19
        break;

    case 3:
         y = a*b*x;
        printf("%d",y); // 6
        break;
    case 4:
         y = a+x/b;
        printf("%d",y); // 5
        break;
    
    default:
    printf(" Error ! Doesn't not exist.");
        break;
    }
     printf(" \n Thank you!");
     
    return 0;
}