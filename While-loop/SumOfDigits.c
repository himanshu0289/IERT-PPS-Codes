/* WAP to print sum of digits of a givne number */
# include <stdio.h>
int main( )
{
    int n,ld,sum=0;
    printf("Ennter a Number :");
    scanf("%d",&n);
    while(n>0){
    
        ld=n%10;
         n=n/10;
        sum=sum+ld;
    }
    printf("The sum of digit is %d",sum);
    return 0 ;
}