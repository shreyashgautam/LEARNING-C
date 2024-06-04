#include<stdio.h>
int main(){
    int arr[100];
    int sum=0;
    int i;
    int b;
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];

    }
    for(i=0;i<5;i++){
        printf("a[%d]=%d\n",i,arr[i]);
    }
    printf("sum is %d",sum);

}