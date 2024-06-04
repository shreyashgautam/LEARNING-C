#include<stdio.h>
int main(){
    int n;
    printf("rows:");
    scanf("%d",&n);
    int m;
    printf("columns:");
    scanf("%d",&m);

    for(int i=0;i<=n;i++){
        printf("\n");
        for(int j=0;j<=m;j++){
            if(i==n || j==m||i==0||j==0) printf("*");
            else printf(" ");
        }
    }
}