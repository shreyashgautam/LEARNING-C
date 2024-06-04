#include<stdio.h>
typedef struct book{
    int bno;
    int price;
    int quant;
    char name[100];
    char author[100];
}book;
void details(book b[100],int n){
    for(int i=0;i<n;i++){
        printf("%d",b[i].bno);
        printf("%d",b[i].price);
        printf("%d",b[i].quant);
        printf("%s",b[i].name);
        printf("%s",b[i].author);
    }
}
void maximum(book b[100],int n){
    int max=0;
    int pos=0;
    for(int i=0;i<n;i++){
        if(max<b[i].price){
            max=b[i].price;
            pos=i;
        }
    }
    printf("%s %s %d",b[pos].name,b[pos].author,b[pos].price);
}
void minumum(book b[100],int n){
    int min=10000;
    int pos1=0;
    for(int i=0;i<n;i++){
        if(min>b[i].quant){
            min=b[i].quant;
            pos1=i;
        }
    }
    printf("%s %s %d",b[pos1].name,b[pos1].author,b[pos1].price);
}
void identity(book b[100],int n,int newid){
    for(int i=0;i<n;i++){
        if(b[i].bno==newid){
            printf("%s %s %d",b[i].name,b[i].author,b[i].price);
        }
    }
}
void calc(book b[100],int n){
    int sum[100];
    for(int i=0;i<n;i++){
        sum[i]=b[i].price*b[i].quant;
    }
    int total=0;
    for(int i=0;i<n;i++){
        total+=sum[i];
    }
    for(int i=0;i<n;i++){
        printf("%d",b[i].bno);
        printf("%d",b[i].price);
        printf("%d",b[i].quant);
        printf("%s",b[i].name);
        printf("%s",b[i].author);
        printf("%d",sum[i]);
    }
    printf("%d",total);
    float discount;
    float net;
    if(total<10000){
        discount=0.05*total;
        net=total-discount;
    }
    else if(total>=10000){
        discount=0.1*total;
        net=total-discount;
    }
    printf("%f",discount);
    printf("%f",net);
}
int main(){
    int n;
    scanf("%d",&n);
    book b[100];
    for(int i=0;i<n;i++){
        scanf("%d",&b[i].bno);
        scanf("%d",&b[i].price);
        scanf("%d",&b[i].quant);
        scanf("%s",&b[i].name);
        scanf("%s",&b[i].author);
    }
    details(b,n);
    maximum(b,n);
    minumum(b,n);
    int newid;
    scanf("%d",&newid);
    identity(b,n,newid);
    calc(b,n);
}