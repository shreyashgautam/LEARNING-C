#include<stdio.h>
#include<string.h>
typedef struct book{
    char author[100];
    char title[100];
    int price;
    char pub[100];
    int stock;
}book;
int main(){
    int n;
    printf("enter the number of book present: ");
    scanf("%d",&n);

    book b[n];
    for(int i=0;i<n;i++){
        scanf("%s",b[i].author);
        scanf("%s",b[i].title);
        scanf("%s",b[i].pub);
        scanf("%d",&b[i].price);
        scanf("%d",&b[i].stock);
    }
    char a[100];
    char x[100];
    scanf("%s",a);
    scanf("%s",x);
    int w=0;
    int total=0;
    for(int i=0;i<n;i++){
        if(strcmp(a,b[i].title)==0 && strcmp(x,b[i].pub)==0){
            w=1;
            printf("%s\n",b[i].author);
        printf("%s\n",b[i].title);
        printf("%s\n",b[i].pub);
        printf("%d\n",b[i].price);
        printf("%d\n",b[i].stock);
        int copy;
        scanf("%d",&copy);
        
        if(b[i].stock>=copy){
            total=b[i].price*copy;
            printf("%d\n",total);
            b[i].stock=b[i].stock-copy;
            printf("book sold is %s and cost is %d",b[i].title,total);
            printf("%d",b[i].stock);
        }
        else{
            printf("sorry copy not avaiable\n");
        }
        }
    
    }
    if(w==0){
        printf("sorry that book is not avaiable\n");
    }

}