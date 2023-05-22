
#include<stdio.h>
int main(){
    float Bas_sal ,DA,HRA,fund,gross_sal,net_sal;
    printf("Enter the Basic salary :");
    scanf("%f",&Bas_sal); // 25000 Rs
    DA = 0.25*Bas_sal;  // 25000*0.25 =  6250
    HRA = 0.15*Bas_sal; // 25000 * 0.15 = 3750
    gross_sal = DA + HRA + Bas_sal; // 6250 + 3750 + 25000 = 350000
    fund = 0.1 * gross_sal; // 0.1 * 35000 = 3500
    net_sal = gross_sal - fund ; // 35000 - 3500 = 31500
    printf("The net salary : %f",net_sal); // 31500

    return 0;
}