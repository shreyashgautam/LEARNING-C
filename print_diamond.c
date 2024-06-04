#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int num;
    scanf("%d",&num);
    int d;
    scanf("%d",&d);
    int count=0,sum=0;
    for(int i=a;;i=i+d){
        if(count==num){
            break;
        }
        printf("%d\t",i);
        count=count+1;
        sum=sum+i;
        
    }
    printf("\n %d",sum);
}