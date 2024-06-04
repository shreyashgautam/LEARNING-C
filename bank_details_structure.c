#include<stdio.h>
typedef struct bank{
    char name[100];
    int number;
}bank;
int main(){
    bank cus[2];
    scanf("%s",&cus[0].name);
    scanf("%d",&cus[0].number);
    scanf("%s",&cus[1].name);
    scanf("%d",&cus[1].number);
    printf("%s %d",cus[0].name,cus[0].number);
    return 0;
}