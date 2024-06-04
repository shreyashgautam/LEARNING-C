#include<stdio.h>
int main(){
    int a;
    int b;
    scanf("%d %d",&a,&b);
    int rem;
    rem=a-(a/b)*b;
    printf("%d",rem);
    }