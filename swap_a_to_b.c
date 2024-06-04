#include<stdio.h>
int main(){
    int a=3;
    int b=4;
    int c;
    c=a;
    a=b;
    b=c;
    printf("%d value of a\n",a);
    printf("\n%d value of b",b);
    return 0;
    
}