#include<stdio.h>
int main(){
    int a[5];
    int x;
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(a[i]>a[j]){
                x=a[i];
                a[i]=a[j];
                a[j]=x;
            }
        }
    }
    for(int i=0;i<5;i++){
        printf("%d\t",a[i]);
    }
    }
