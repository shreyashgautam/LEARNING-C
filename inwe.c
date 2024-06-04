#include<Stdio.h>
#include<stdlib.h>
int main(){
    int n;
    int m;
    scanf("%d",&n);
    scanf("%d",&m);
    int **a=(int **)malloc(n*sizeof(int*));
    for(int i=0;i<n;i++){
        a[i]=(int *)malloc(m*sizeof(int));
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
}