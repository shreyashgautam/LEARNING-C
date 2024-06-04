#include<stdio.h>
struct address{
    int houseno;
    int block;
    char city[100];
    char state[100];
};
void printinfo(struct address s1);
int main(){
    struct address s1[5];
    scanf("%d",&s1[0].houseno);
    scanf("%d",&s1[0].block);
    scanf("%s",&s1[0].city);
    scanf("%s",&s1[0].state);
    scanf("%d",&s1[1].houseno);
    scanf("%d",&s1[1].block);
    scanf("%s",&s1[1].city);
    scanf("%s",&s1[1].state);
    scanf("%d",&s1[2].houseno);
    scanf("%d",&s1[2].block);
    scanf("%s",&s1[2].city);
    scanf("%s",&s1[2].state);
    scanf("%d",&s1[3].houseno);
    scanf("%d",&s1[3].block);
    scanf("%s",&s1[3].city);
    scanf("%s",&s1[3].state);
    scanf("%d",&s1[4].houseno);
    scanf("%d",&s1[4].block);
    scanf("%s",&s1[4].city);
    scanf("%s",&s1[4].state);
    printfinfo(s1[0]);
    printfinfo(s1[1]);
    printfinfo(s1[2]);
    printfinfo(s1[3]);
    printfinfo(s1[4]);
    return 0;
}
void printinfo(struct address s1){
    printf("%d,%d,%s,%s\n",s1.houseno,s1.block,s1.city,s1.state);
}