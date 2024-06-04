#include<stdio.h>
void area(int n);
int main (){
    int n;
    scanf("%d",&n);
    area(n);
    return 0;
}
void area(int n){
    int a;
    a=n*n;
    printf("%d",a);

}