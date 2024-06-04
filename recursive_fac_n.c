#include<stdio.h>
void fact(int n,int ans);
int main(){
    int n;
    int ans=1;
    scanf("%d",&n);
    fact(n,ans);
    return 0;
}
void fact(int n,int ans){
    if(n==0){
        printf("%d",ans);
        return;
    }
    else{
        ans=ans*n;
        fact(n-1,ans);
        
    }
}