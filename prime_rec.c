#include<stdio.h>
int prime(int a,int i);
int main(){
    int a;
    scanf("%d",&a);
    int i=a/2;
    int x;
    printf("%d",prime(a,i));
}
int prime(int a,int i){
    if(a/2<i){
        if(a%i==0){
            return 10;
        }
        else if(i==1){
            return 1;
        }
        else{
            prime(a,i--);
        }
    }
    
}