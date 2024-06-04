//table of a number
#include<stdio.h>
void table(int n);
int main(){
    int n;
    scanf("%d",&n);
    table(n);
    return 0;
}
void table(int n){
    for(int i =1 ;i<=10;i=i+1){
        printf("%d\n",n*i);
    }
}