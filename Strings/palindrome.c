//Q:- WAp to find wheather a tring is given palindrome or not?
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char str[100];
    int i=0,len;
    int flag =0;
      printf("Enter the strings : ");
      scanf("%s",str);
       len = strlen(str);
       
       for(i=0;i<len;i++){
        if(str[i] != str[len-i-1]){
          flag = 1;
          break;
        }
      }
      if(flag == 0)
        printf("%s is Palindrome num ",str);
     else
        printf("%s is not Palindrome number ",str);
    return 0;
}