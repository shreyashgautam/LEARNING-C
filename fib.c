#include<stdio.h>
void fib(int n);
void rfib(int n,int a,int b);
void tower(int n,char from_rod,char to_rod,char aux_rod);

int main(){
    int n;
    scanf("%d",&n);
    int from_rod='A';
    int to_rod='c';
    int aux_rod='B';
    int a=0;
    int b=1;
    printf("fib using not recursive\n");
    printf("%d\t",a);
    printf("%d\t",b);
    fib(n);
    printf("\nfib using recursive\n");
    printf("%d\t",a);
    printf("%d\t",b);
    rfib(n-1,a,b);
    printf("\ntower of hanoi using recursive\n");
    tower(n,from_rod,to_rod,aux_rod);
    
}
void fib(int n){
    int a=0;
    int b=1;
    int c=a+b;
    for(int i=2;i<=n;i++){
        printf("%d\t",c);
        a=b;
        b=c;
        c=a+b;
    }
}
void rfib(int n,int a,int b){
    
    int c=a+b;
    
    if(n>0){
        c=a+b;
        a=b;
        b=c;
        printf("%d\t",c);
        rfib(n-1,a,b);
    }
}
void tower(int n,char from_rod,char to_rod,char aux_rod){
    if(n>0){
        tower(n-1, from_rod, aux_rod, to_rod);
        printf("Move disk %d from rod %c to rod %c\n",n,from_rod,to_rod);
        tower(n-1, aux_rod, to_rod, from_rod);
    }
}
 