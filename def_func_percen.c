#include<stdio.h>
void percent(float a,float b,float c);
int main(){
    float a;
    float b;
    float c;
    scanf("%f %f %f",&a,&b,&c);
    percent(a,b,c);
    return 0;
}
void percent(float a,float b,float c){
    float p=0;
    p=(a+b+c)/3;
    printf("%f",p);

}