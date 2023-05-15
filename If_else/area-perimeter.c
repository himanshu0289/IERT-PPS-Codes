#include<stdio.h>
#include<conio.h>
int main()
{
    int l,b,area,pm;
printf("Enter the lenth : ");
scanf("%d",&l);
printf("Enter the width : ");
scanf("%d",&b);
area = l*b;
pm = 2*(l+b);
printf("Area of Rectangle : %d\n",area);
printf("Perimeter of Rectangle : %d\n",pm);
if(area > pm){
    printf("Area of Rectangle is greater than it's perimeter.");
} 
else if(area == pm){
    printf("");
}else{
    printf("Perimeter is greater than their aree.");
}
return 0;
}