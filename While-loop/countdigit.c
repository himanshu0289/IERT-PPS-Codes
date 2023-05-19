/*WAP to count digits of a given number.*/
# include <stdio.h>
int main( )
{
    int count =0,n;
    printf("Enter a num :"); 
    scanf("%d ",&n);
     while(n>0){
        n =n/10;
        count++;
   }
    printf("The No of digit are %d",count);
    
    return 0 ;
}