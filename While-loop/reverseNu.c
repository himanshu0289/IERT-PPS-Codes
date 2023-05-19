/* WAP to print sum of digits of a givne number */
# include <stdio.h>
int main( )
{
    int n,r=0;
    printf("Ennter a Number :");
    scanf("%d",&n);
     while(n>0){
         r=r*10;
        r= r + (n%10);
    
        n=n/10;
     }
    printf("%d is The reverse of Number",r);
    return 0 ;
}