  /* WAP to construct a Armstrong number upto n terms */
#include<stdio.h>
#include<math.h>
int main( )
{
     int num,temp,rem,sum=0;
     printf("Armstrong Number between 100 to 500 is :");
     for(num=100;num<=500;num++){
      temp=num;
      while(temp!=0){
        rem= temp%10;
        sum= sum+pow(rem,3);
        temp= temp/10;
      }
      if(sum==num){
      printf("%d ",num);
    
      }
      sum=0;
     }
    
    return 0 ;
}