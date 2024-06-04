#include<stdio.h>
int main(){
    int a;
    printf("enter your age");
    scanf("%d",&a);
    a>18?printf("you are adult") : printf("you are kid");
    return 0;
}