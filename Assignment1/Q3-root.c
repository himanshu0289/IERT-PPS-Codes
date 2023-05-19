//Q-WAP to determine root of the quadratic equation in c language

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float a,b,c,D,x1,x2,RP,IP;
printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f",&a, &b, &c);

printf("a : %f\n b: %f\n c: %f\n ",a,b,c);

 D = (b*b-4*a*c);

if(D > 0){
    x1 = (-b + sqrt(D))/(2*a);
    x2 = (-b - sqrt(D))/(2*a);
    printf("root1 : %f\n and root2 : %f ",x1,x2);
}else if(D == 0){
    x1 = x2 = -b/(2*a);
    printf("root1 = root2 : %f",x1);
}else{
    RP= -b/(2*a);
    IP= sqrt(-D)/(2*a);
    printf("root1 : %f+%f and root2 : %f-%f ",RP,IP,RP,IP);

}
return 0;
}