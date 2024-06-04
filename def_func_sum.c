#include<stdio.h>
void hello();
int main(){
    hello();
    return 0;
}
void hello(){
    int c;
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    c=a+b;
    printf("%d\n",c);
}