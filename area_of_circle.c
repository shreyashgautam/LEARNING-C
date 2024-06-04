#include<stdio.h>
void area(float n);
int main (){
    float n;
    scanf("%f",&n);
    area(n);
    return 0;
}
void area(float n){
    float a;
    a=3.14*n*n;
    printf("%f",a);

}