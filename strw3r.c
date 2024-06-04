#include<stdio.h>
typedef struct time{
    int sec;
    int min;
    int hr;
}time;
int main(){
    time t[2];
    for(int i=0;i<2;i++){
        scanf("%d",&t[i].hr);
        scanf("%d",&t[i].min);
        scanf("%d",&t[i].sec);
    }
    int news=0;
    int newm=0;
    int newh=0; // 10:30:40  12:24:23
    news=t[0].sec+t[1].sec;//63
    newm=t[0].min+t[1].min + news/60; //30+24+1=55
    newh=t[0].hr+t[1].hr+newm/60;//10+12=22

    news=news%60;
    newm=newm%60;
    printf("%d ",newh);
    printf("%d ",newm);
    printf("%d ",news);
    }