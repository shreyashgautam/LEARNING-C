#include<stdio.h>
int main(){
    int a;
    printf("enter the number");
    scanf("%d",&a);
    if (a>0){
        if (a%2==0){
            printf("even number");
        }
        else{
            printf("odd number");
        }
        
    }
    else{
        printf("the given number is -ve");
    }
    return 0;
}