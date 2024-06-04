#include<stdio.h>
int main(){
    int a=1;
    int b;
    scanf("%d",&b);
    for(int i=1;i<=b;i=i+1){
        a=a*i;
    }
    printf("%d",a);
    return 0;
}