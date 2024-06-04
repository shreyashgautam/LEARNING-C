#include<Stdio.h>
typedef struct book{
    char name[100];
    char author[100];
    int price;
}book;
int main(){
    int n;
    scanf("%d",&n);
    book b[n];
    for(int i=0;i<n;i++){
        scanf("%s",b[i].name);
        scanf("%s",b[i].author);
        scanf("%d",&b[i].price);
    }
    int max=0;
    int min=1000000;
    int pos1=0;
    int pos2=0;
    for(int i=0;i<n;i++){
        if(max<b[i].price){
            max=b[i].price;
            pos1=i;
        }
        if(min>b[i].price){
            min=b[i].price;
            pos2=i;
        }
    }
    printf("\n the highest price of book is \n");
     printf("%s\n",b[pos1].name);
        printf("%s\n",b[pos1].author);
        printf("%d\n",b[pos1].price);
    printf("\n the lowest price of book is \n");
     printf("%s\n",b[pos2].name);
        printf("%s\n",b[pos2].author);
        printf("%d\n",b[pos2].price);
}