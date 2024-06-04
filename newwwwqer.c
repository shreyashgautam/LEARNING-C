#include<stdio.h>
int fib(int a,int b,int c,int n);
int main(){
    int a=0;
    int b=1;
    int c=a+b;
    int n;
    scanf("%d",&n);
    int ans;
    ans=fib(a,b,c,n);
    printf("%d",ans);
}
int fib(int a,int b,int c,int n){
    if(n==1||n==2){
        return 1;
    }
    else{
        return fib(a,b,c,n-1)+fib(a,b,c,n-2);
    }
}