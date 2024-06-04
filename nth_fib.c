#include<stdio.h>
int fib(int a);
int main(){
    int a;
    scanf("%d",&a);
    printf("%d",fib(a));
}
int fib(int a){
    if(a==1||a==0){
        return 1;
    }
    else{
       return fib(a-1)+fib(a-2);
    }
}