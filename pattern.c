#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int b=0;
    for(int i=1;i<=n;i++){
        printf("\n");
        b=b+1;

        for(int j=1;j<=i;j++){
            printf("%d ",b);
        }
    }
}