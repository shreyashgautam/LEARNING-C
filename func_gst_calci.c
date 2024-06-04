#include<stdio.h>
void calc(float n);
int main(){
    float n ;
    printf("enter the amount:");
    scanf("%f",&n);
    calc(n);
    return 0;
}
void calc(float n){
    n = n + (0.18*n);
    printf("%f",&n);
}