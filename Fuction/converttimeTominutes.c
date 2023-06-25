#include<stdio.h>
int Convert_minute(int hr,int mnt){
    int Ttime = hr*60 + mnt;
    return Ttime;
}
int main(){
    int hr,mnt,Ttime;
    printf("Enter hours and minutes : ");  // 4 20
    scanf("%d %d",&hr,&mnt);
    Ttime = Convert_minute(hr,mnt);
    printf("Total time in minutes is : %d ",Ttime); // 260 <= 6*4 + 20
    return 0;
}