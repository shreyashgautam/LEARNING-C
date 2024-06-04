#include<stdio.h>
int main(){
    int a;
    int count=0;
    scanf("%d",&a);
    for(int i = 1 ; i <=a; i=i+1){
        count=count+i;
    }
    printf("%d",count);
    return 0;
}