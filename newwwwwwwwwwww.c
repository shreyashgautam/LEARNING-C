#include<stdio.h>
float pi=3.14;
void calcarea(float length);
int main(){
    float length;
    scanf("%f",&length);
    
    calcarea(length);
}
void calcarea(float length){
    float area;
    area=length*length;
    printf("%f",area);
}