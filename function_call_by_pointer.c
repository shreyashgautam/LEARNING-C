#include<stdio.h>
void square(int n);
void square2(int *n);
int main(){
    int number=4;
    square2(&number);
    printf("%d",number);
}
void square(int n){
    n=n*n;
    printf("%d",n);
}
void square2(int *n){
    *n=(*n)*(*n);
    printf("%d",*n);
}