#include<stdio.h>
struct book {
    char title[100];
    char author[100];
    char pub[100];
    int price;
};
int main(){
    int n;
    scanf("%d",&n);
    struct book b[n];
    for(int i=0;i<n;i++){
        printf("enter the book name : ");
        scanf("%s",b[n].title);
        printf("enter the author name : ");
        scanf("%s",b[n].author);        
        printf("enter the publication name : ");
        scanf("%s",b[n].pub);  
        printf("enter the price : ");
        scanf("%d",&b[n].price);
    }
    for(int i=0;i<n;i++){
        printf("name of the book is : %s\n",b[n].title);
        printf("name of the author is : %s\n",b[n].author);
        printf("name of the publication is : %s\n",b[n].pub);
        printf("price of the book is : %d\n",b[n].price);
    }
}