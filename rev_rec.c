#include<stdio.h>
int rev(int a);
int main(){
    int a;
    scanf("%d",&a);
    printf("%d",rev(a));
}
int rev(int a){
    static int  x=0;
    int rex=0;
    if(a>0){
        rex=a%10;
        x=x*10+rex;
        rev(a/10);
    }
    else{
        return x;
    }
}