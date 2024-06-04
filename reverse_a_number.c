#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int n;
    int num=0;
    while(a>0){
        n=a%10;
        num=num*10+n;
        a=a/10;
    }
    printf("%d",num);
}