#include<stdio.h>
typedef struct book{
    int price;
    char name[100];
    char auth[100];
}book;
int main(){
    int n;
    scanf("%d",&n);
    book b[n];
    for(int i=0;i<n;i++){
        scanf("%d",&b[i].price);
        scanf("%s",b[i].name);
        scanf("%s",b[i].auth);
    }
    int max=0;
    int pos1=0;
    int min=10000;
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
    printf("highest price book is %s\n",b[pos1].name);
    printf("lowest price book is %s\n",b[pos2].name);
    }