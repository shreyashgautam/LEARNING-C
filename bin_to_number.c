#include<stdio.h>
#include<math.h>
int num(int a,int b,int i);
int main(){
    int a;
    scanf("%d",a);
    int i=0;
    int b=0;
    printf("%d",num(a,b,i));
}
int num(int a,int b,int i){
    int rem=0;
    if(a>0){
        rem=a%10;
        b=(int)rem*pow(2,i);
        num(a/10,b,i++);
    }
    else{
        return b;
    }
}
