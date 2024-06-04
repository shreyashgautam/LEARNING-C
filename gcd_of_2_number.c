#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b){
        int c;
        c=a;
        a=b;
        b=c;
    }
    for(int i=b;i>=1;i--){
        if(a%i==0 && b%i==0){
            printf("GCD IS %d",i);
            break;
        }
    }
}