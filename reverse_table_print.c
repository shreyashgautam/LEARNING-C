#include<stdio.h>
int main(){
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    for(a;a>=1;a=a-1){
        printf("%d\n",a*b);
    }
    return 0;
}