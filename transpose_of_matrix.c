#include<stdio.h>
int main(){
    int a[100][100];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<2;i++){
        printf("\n");
        for(int j=0;j<2;j++){
            printf("%d\t",a[j][i]);
        }
    }
}