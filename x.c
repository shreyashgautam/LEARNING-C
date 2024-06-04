#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct book{
    int quan;
    int price;
    char name[100];
    int id;
}book;
void cal(struct book *b,int n){
    int max=0;
    int pos=0;
    for(int i=0;i<n;i++){
        if(b[i].price>max){
            max=b[i].price;
            pos=i;
        }
    }
    printf("%s",b[pos].name);
}
void calmin(struct book *b,int n){
    int min=1111110;
    int pos1=0;
    for(int i=0;i<n;i++){
        if(b[i].quan<min){
            min=b[i].quan;
            pos1=i;
        }
    }
    printf("%s",b[pos1].name);
}
void check(struct book *b,int n){
    int iid; 
    char na[100];
    scanf("%s",na);
    scanf("%d",&iid); 
    for(int i=0;i<n;i++){
        if(b[i].id==iid && strcmp(b[i].name,na)==0){
            int p;
            scanf("%d",&p);
            if(b[i].quan>=p){
                printf("%d",p*b[i].price);
            }
            else{
                printf("out of stock");
            }
        }
    }
}
void new(book *b,int n){
    float newprice[100];
    float total=0;
    for(int i=0;i<n;i++)
    {
        newprice[i]=(0.18*b[i].price)+b[i].price;
        total+=newprice[i];
    }
    float avg;
    avg=total/n;
}
int main(){
    
    int n; 
    scanf("%d",&n);
    book *b=(book*)malloc(n*sizeof(book)); 
    for(int i=0;i<n;i++){
        scanf("%d",&b[i].price);
        scanf("%d",&b[i].id);
        scanf("%d",&b[i].quan);
        scanf("%s",&b[i].name);
    }
    
    cal(b,n);
    calmin(b,n);
    check(b,n);
} 