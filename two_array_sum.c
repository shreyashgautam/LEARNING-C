#include<stdio.h>
int main(){
    int a[100][100];
    int b[100][100];
    for(int i=0;i<3;i=i+1){
        for(int j=0;j<3;j=j+1){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<3;i=i+1){
        for(int j=0;j<3;j=j+1){
            scanf("%d",&b[i][j]);
        }
    }
    int c[100][100];
    for(int i=0;i<3;i=i+1){
        for(int j=0;j<3;j=j+1){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=0;i<3;i=i+1){
        printf("\n");
        for(int j=0;j<3;j=j+1){
            printf("%d\t",c[i][j]);
        }
    }
}