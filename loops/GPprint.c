// Display this GP 1,2,4,8,16,32....upto'n' terms.
 #include<stdio.h>
#include<conio.h>
int main()
{
    int n,a=1;
    printf("Enter a Num :");
    scanf("%d",&n);
    // 1,2,4,16,32,64,128,256....
   for(int i =1;i<=n;i++){
    printf("%d ",a);
    a = a*2;
   }

   //method -- 2

    return 0;
}