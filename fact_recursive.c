#include<stdio.h>
void sum(int n ,int count,int i){
    if(i==n+1){
        printf("%d",count);
    }
    else{
        count=count*i;
        sum(n,count,i+1);
    }
}
int main(){
    int n;
    int count=1;
    int i=1;
    scanf("%d",&n);
    sum(n,count,i);
    
}
