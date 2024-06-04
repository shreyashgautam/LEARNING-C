#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int rev=0;
    int x[100];
    int i=0;
    while(a>0){
       rev=a%8;
       x[i]=rev;
       i++;
       a=a/8;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d\t",x[j]);
        }
}