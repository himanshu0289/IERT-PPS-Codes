#include<stdio.h>
#include<conio.h>
#include<string.h> //have an error
int main(){
    int str[25];
    puts("Enter the strings : ");
    gets(str);
    int len=0;
    int i=0;
    while(str[i]!= '\0'){
        len++;
        i++;
    }
    printf("the length of Strings is  : %d",len);
    return 0;
}
