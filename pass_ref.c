#include<stdio.h>
void swap(int *x,int *y);
int main(){
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    swap(&a,&b);
    printf("%d\n",a);
    printf("%d\n",b);
}
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}