#include<stdio.h>
#include<conio.h>
int main()
{
  /* Method -- 1

   for(int i =2;i<=100;i=i+2){
    printf(" %d ",i);
   }

   */

// method--2
 /* for(int i =1;i<=100;i=i+1){
    if(i%2==0){
    printf(" %d ",i);
    }
   } */

   // method -- 3
 /*  for(int i =1;i<=50;i=i+1){
    printf(" %d |",2*i);
   }
*/
   //method --4
   for(int i=1;i<=100;i++){
      if(i%2!=0){
         continue;
      }
      printf(" %d ",i);
   }
    return 0;
}