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
    float nPr;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Enter r : ");
    scanf("%d",&r);
    nPr = fact(n)/(fact(r));
    printf("the %dP%d is %f ",n,r,nPr); 
    return 0;
}