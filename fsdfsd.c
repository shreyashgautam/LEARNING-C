#include<stdio.h>
int main(){
    int n=8;
    int m=13;
    scanf("%d",&n);
    scanf("%d",&m);
    int a[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int temp=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==1){
                if(i==0 ){
                    continue;
                }
                else if(j==0){
                    continue;
                }
                else if(j==m-1){
                    continue;
                }
                else if(j==n-1){
                    continue;
                }
                else {
                    if(a[i+1][j]==1 &&a[i][j+1]==1 && a[i-1][j]==1 && a[i][j-1]){
                    temp++;
                    }
                }
                
            }
        }
    }
    printf("%d",temp);
}