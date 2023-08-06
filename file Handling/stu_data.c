#include<stdio.h>
#include<conio.h>
int main(){
    int r,h,e,phy,c,m;
    FILE *p;
    p = fopen("mark.dat","w");
    for(int i=0;i<10;i++){
        scanf("%d",&r);
        scanf("%d",&h);
        scanf("%d",&e);
        scanf("%d",&phy);
        scanf("%d",&c);
        scanf("%d",&m);    
    } 
    printf(" P roll nu :%d \n \n %d %d %d %d",h,e,phy,c,m);
    fclose(p);
    return 0;
}
