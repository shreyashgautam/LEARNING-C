#include<stdio.h>
#include<math.h>
int main(){
    int a;
    int sum=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        double x;
        x=pow(10,i);
        int y;
        y=(int)x;
        int z;
        z=y-1;
        printf("%d ",y-1);
        sum=sum+z;
    }
    printf("\n%d",sum);
}