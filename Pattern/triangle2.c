// |         *
// |       * *
// |     * * *
// |   * * * *
// | * * * * * have a mistake in code
#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter a Num : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
           if(j<=i) printf("* ");
           
        }
        printf("\n");
    }
    
    return 0;
}