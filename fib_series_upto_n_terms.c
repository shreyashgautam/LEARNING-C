#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a;
    int b;
    a=0;
    b=1;
    int c;
    c=a+b;
    printf("%d %d ",a,b);
    for(int i=3;i<=n;i++){
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
    }
    return 0;
}