/*If cost price and selling price of an item is input through the keyboard,
WAP to determine whether the seller has made profit or incurred loss.ALso deterine 
 how much profit he made or loss he incurred.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int cp,sp,prft,loss;
printf("Enter cost price : ");
scanf("%d",&cp);
printf("Enter selling price : ");
scanf("%d",&sp);
if(sp>cp){
    prft = sp-cp;
    printf("MAde profit : %d ",prft);
}else if(cp==sp){
    printf("Neither made profite nor loss");
}else{
    loss = cp-sp;
    printf("Made Loss : %d ",loss);
}
 
return 0;
}