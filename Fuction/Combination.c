#include<stdio.h>
int fact(int num){
    int f=1;
   // if(num==0 || num==1) return 1;
    for(int i=1;i<=num;i++){
        f = f*i;
     }
     return f;
}
int main(){
    int n,r;
    float nCr;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Enter r : ");
    scanf("%d",&r);
    nCr = fact(n)/(fact(r)*fact(n-r));
    printf("the %dC%d is %f ",n,r,nCr); 
    return 0;
}