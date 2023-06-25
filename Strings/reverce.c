#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
   char str[25];
   puts("Enter a string : ");
   gets(str);
   int len = strlen(str);
   for(int i=0,j=len-1;i<=j;i++,j--){
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
   }
   puts("the reverse string is : ");
   puts(str);

    return 0;
}