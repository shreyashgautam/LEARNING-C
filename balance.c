#include<stdio.h>
typedef struct bank{
    char name[100];
    int bal;
    int number;
}bank;
void increase(struct bank *b){
    int dep;
    scanf("%d",&dep);
    b->bal=b->bal+dep;
}
void dec(struct bank *b){
    int w;
    scanf("%d",&w);
    b->bal=b->bal-w;
}
int main(){
    bank b;
    int x;
    scanf("%s",b.name);
    scanf("%d",&b.bal);
    scanf("%d",&b.number);
    scanf("%d",&x);
    if(x==1){
        increase(&b);
    }
    else if(x==2){
        dec(&b);
    }
    printf("%d",b.bal);
}