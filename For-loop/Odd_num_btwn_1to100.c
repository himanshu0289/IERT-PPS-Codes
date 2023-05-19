#include<stdio.h>
#include<conio.h>
int main()
{
     //meth0d--1

   /*for(int i =1;i<=100;i=i+2){
    printf(" %d |",i);
   }
   */

  // method --2
 /*
 for(int i=1;i<=100;i=i+1){
    if(i%2!=0)
     printf(" %d |",i);
  }
  */
  
  // method --3
  for (int i = 0; i <=100; i++)
  {
    if(i%2==0) //even
    { // i is a factor of n
      continue;
    }
  printf(" %d |",i);
  }
  

    return 0;
}