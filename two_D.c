#include<stdio.h>
int main(){
    int a[100][100];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        printf("\n");
        for(int j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
    }
}