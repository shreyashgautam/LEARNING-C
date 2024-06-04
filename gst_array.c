#include<stdio.h>
int main(){
    int m[3];
    scanf("%d",&m[0]);
    scanf("%d",&m[1]); 
    scanf("%d",&m[2]);
    int t;
    t=m[0]+m[1]+m[2];
    float to;
    to=t+0.18*t;
    printf("%f",to);
    return 0;
}