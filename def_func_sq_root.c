#include<stdio.h>
#include<math.h>
void sq(float n);
int main(){
    float n;
    scanf("%f",&n);
    sq(n);
    return 0;
}
void sq(float n){
    float a;
    a=pow(n,0.5);
    printf("%f",a);
}