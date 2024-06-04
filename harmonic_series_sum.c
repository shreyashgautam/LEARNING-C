#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    float sum=0;
    for(int i=1;i<=a;i++){
        sum=sum+(1/ (float)i);
    }
    printf("%f",sum);
}