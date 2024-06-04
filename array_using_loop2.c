#include<stdio.h>
int main(){
    int a[5];
    for (int i=0;i<5;i=i+1){
        printf("%d",i);
        scanf("%d",&a[i]);
    }
    for (int i=0;i<5;i=i+1){
        printf("%d %d\n",i,a[i]);
    }

}