#include<stdio.h>
void area(int n,int m);
int main(){
    int n ;
    int m;
    scanf("%d",&n);
    scanf("%d",&m);
    area(n,m);
    return 0;
}
void area(int n ,int m){
    int a;
    a=n*m;
    printf("%d",a);
}