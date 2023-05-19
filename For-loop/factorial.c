 /* WAP to print the factorial of given number */
# include <stdio.h>
int main( )
{
    int n,c=1;
    printf("Enter a Number :");
    scanf("%d",&n); //5
    for(int i=1;i<=n;i++){
        c=c*i;   //120
    }
    printf("The factorial is : %d \n",c); //120
    
    return 0 ;
}