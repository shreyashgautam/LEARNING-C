#include<stdio.h>
int main(){
    int n;
    printf("number enter >2");
    scanf("%d",&n);
    int fib[n];
    fib[0]=0;
    fib[1]=1;
    printf("%d\t%d\t",fib[0],fib[1]);
    for(int i=2;i<n;i=i+1){
        fib[i]=fib[i-2]+fib[i-1];
        printf("%d\t",fib[i]);
    }
    return 0;
}