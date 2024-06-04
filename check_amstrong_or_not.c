#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int sum=0;
    int x;
    int temp;
    temp=a;
    while(a>0){
        x=a%10;
        sum=sum+(x*x*x);
        a=a/10;
    }
    if(temp==sum){
        printf("amstrong");
    }
    else{
        printf("not amstrong");
    }
}