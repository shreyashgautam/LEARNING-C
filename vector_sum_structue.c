#include<stdio.h>
struct vector{
    int x;
    int y;
};
void sum(struct vector);
int main(){
    struct vector v[2];
    scanf("%d",&v[0].x);
    scanf("%d",&v[0].y);
    scanf("%d",&v[1].x);
    scanf("%d",&v[1].y);
    int sum1;
    int sum2;
    sum1 =v[0].x+v[1].x;
    sum2= v[0].y+v[1].y;
    printf("%dx+%dy",sum1,sum2);
    return 0;
}