#include<stdio.h>
void cel(float n);
int main(){
    float n;
    scanf("%f",&n);
    cel(n);
    return 0;
}
void cel(float n){
    n=(n*1.8)+32;
    printf("%f",n);
}