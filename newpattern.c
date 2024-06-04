#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int d=1;
    int sum=1;
    printf("%d+",d);
    for(int i=1;i<a;i++){
        //d=1;
        d=d*10+1;
        printf("%d+",d);
        sum=sum+d;
    }
    printf("\n%d",sum);
}
