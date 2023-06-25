#include<stdio.h>
int min(int a ,int b){
    if(a<b) return a;
    else return b;
 }
// int gcd(int a, int b){
//     int hcf;
//     for(int i=1;i<=min(a,b);i++){
//         if(a%i==0 && b%i==0){
//             hcf = i;
//         }
//     }
//     return hcf;
// }

int gcd(int a, int b){
    int hcf;
    for(int i=min(a,b);i>=1;i--){
        if(a%i==0 && b%i==0){
            hcf = i;
            break;
        }
    }
    return hcf;
}
int main(){
    int hcf;
    // int a = 22,b = 60;
    int a,b;
    printf("Enter 1st num : ");
    scanf("%d",&a);
    printf("Enter 2nd num :");
    scanf("%d",&b);
    gcd(a,b);
    printf("HCF of %d and %d is : %d",a,b,gcd(a,b));
    return 0;
}