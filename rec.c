#include<stdio.h>
int dig(int n,int ctr);
int main(){
    int n;
    int ctr=0;
    scanf("%d",&n);
    int x;
    x=dig(n,ctr);
    printf("%d",x);
}
int dig(int n,int ctr){
    if(n!=0){
        ctr++;
        dig(n/10,ctr);
    }
    else{
        return ctr;
    }
    
}