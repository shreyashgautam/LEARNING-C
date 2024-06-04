#include<stdio.h>
typedef struct struct_time{
    int hour;
    int min;
    int sec;
}time;
int main(){
    time t;
    scanf("%d",&t.hour);
    scanf("%d",&t.min);
    scanf("%d",&t.sec);
    printf("\n");
    printf("%d:%d:%d",t.hour,t.min,t.sec);
}