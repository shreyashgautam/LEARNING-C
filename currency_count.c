#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int twoth=x/2000;
    x=x%2000;
    int five_hunder=x/500;
    x=x%500;
    int twohu=x/200;
    x=x%200;
    int oneho=x/100;
    x=x%100;
    int fivty=x/50;
    x=x%50;
    int twenty=x/20;
    x=x%20;
    int five=x/5;
    x=x%5;
    int one=x;
    printf("%d %d %d %d %d %d %d %d",twoth,five_hunder,twohu,oneho,fivty,twenty,five,one);

}