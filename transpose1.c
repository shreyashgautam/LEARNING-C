#include<stdio.h>
int main(){
    int a;
    
    scanf("%d",&a);
    int x[100][100];
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++)
        scanf("%d",&x[i][j]);
    }
    for(int i=0;i<a;i++){
        printf("\n");
        for(int j=0;j<a;j++){
            printf("%d\t",x[i][j]);
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<i;j++){
            int temp;
            x[i][j]=x[i][j]+x[j][i];
            x[j][i]=x[i][j]-x[j][i];
            x[i][j]=x[i][j]-x[j][i];
        }
    }
    printf("\n");
    for(int i=0;i<a;i++){
        printf("\n");
        for(int j=0;j<a;j++){
            printf("%d\t",x[i][j]);
        }
    }
}