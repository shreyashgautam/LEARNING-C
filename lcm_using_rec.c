#include<stdio.h>
int lcm(int a,int b,int k);
int main(){
    int a;
    int b;
    scanf("%d %d",&a,&b);
    if(b>a){
        int c;
        c=a;
        a=b;
        b=c;
    }
    int k=b;
    int x;
    printf("%d",lcm(a,b,k));
}
int lcm(int a,int b,int k){
    if(k%a==0 && k%b==0){
        return k;
    }
    else{
        lcm(a,b,k+1);
    }
}