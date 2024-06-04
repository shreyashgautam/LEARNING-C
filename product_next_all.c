#include<stdio.h>
int main(){
    int a[100];
    int prod[100];
    for(int i=0;i<6;i++){
        scanf("%d",&a[i]);
        prod[i]=1;
    }
    for(int i=0;i<6;i++){
        int x=1;
        for(int j=0;j<6;j++){
            if(i!=j){
              x=x*a[j];
            }
        }
        prod[i]=x;
    }
    for(int i=0;i<6;i++){
        printf("%d\t",prod[i]);
    }
}