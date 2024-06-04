#include<stdio.h>
int main(){
    int a[100];
    int count=0;
    for(int i=0;;i++){
        int b;
        scanf("%d",&b);
        if(b==-1){
            break;
        }
        a[i]=b;
        count++;
    }
    int ctr=0;
    for(int i=0;i<count;i++){
        for(int j=0;j<i;j++)
        if(a[i]!=a[j]){
            printf("%d",a[i]);
            break;
        }
    }
    printf("%d",ctr);
}