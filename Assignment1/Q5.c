#include<stdio.h>
int main(){
    int p,c,m,mm=300,pm,pcm;
    printf("Enter tne Marks :");
    scanf(" %d %d %d",&p,&c,&m);
    pm=p+m;
    pcm=p+c+m;
    if(p>40 && c>50 && m>60){
        if(pm>150 && pcm>200){
            printf("Pass");
        }
    }
    else{
            printf("Fail!");
        }
    return 0;
}