#include<stdio.h>
struct date{
    int day,month,year;
};
int main(){
    struct date d1,d2;
    printf("Enter 1st date :");
    scanf("%d%d%d",&d1.day,&d1.month,&d1.year);
    printf("Enter 2nd date :");
    scanf("%d%d%d",&d2.day,&d2.month,&d2.year);
    if((d1.day==d2.day) && (d1.month==d2.month) && (d1.year==d2.year))
        printf("Equal! , both are same...");
    else printf("Not equal! , both are differ...");
    return 0;
}