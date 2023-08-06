#include<stdio.h>

struct book_bank{
    char name[50];
    int page;
    float price;
};

int main(){
    struct book_bank book[10];
    printf("Enter the books Details : \n");

    for(int i=0;i<10;i++){
        printf("Book %d: ",i+1);
        printf("Enter book's name , pages , price  : ");
        scanf("%s %d %f\n",book[i].name,&book[i].page,&book[i].price);
        // printf("Enter author's name : ");
        // scanf("%s",book[i].author);
        // printf("Enter the pages : ");
        // scanf("%d",&book[i].page);
        // printf("Enter the price's book : ");
        // scanf("%f",&book[i].price);
        // printf(" \n");

    }

    printf("The data of the Books are : \n");
    for(int i=0;i<10;i++){
        printf("%d %s %d %f",i+1,book[i].name,book[i].page,book[i].price);
        
        // printf("Book %d : ",i+1);
        // printf("Author : %s ",book[i].name);
        // printf("Pages : %d ",book[i].page);
        // printf("Price's book %f ",book[i].price);
        printf(" \n");

    }
    return 0;
}