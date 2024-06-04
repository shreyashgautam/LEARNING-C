#include<stdio.h>
int main(){
    int a;
    int count=0;
    scanf("%d",&a);
    while(a>0){
        count=count+1;
        a=a/10; 
    }
    printf("number of digit is %d",count);

}