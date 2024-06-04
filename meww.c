#include<stdio.h>
int square(int n);
int main(){
    int n;
    scanf("%d",&n);
    square(n);
    return 0;
}
int square(int n){
    for(int i =1;i<=n;i=i+1){
        printf("%d\n",i*i);
    }
}