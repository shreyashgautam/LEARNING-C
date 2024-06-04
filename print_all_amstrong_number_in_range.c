#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        int rem=0;
        int sum=0;
        while(i>0){
            rem=i%10;
            sum=sum+(i*i*i);
            rem=rem/10;
        }
        if(sum==i){
            printf("%d",i);
        }
    }
    return 0;
}