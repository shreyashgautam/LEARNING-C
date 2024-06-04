#include<stdio.h>
int main(){
    int a[100][100];
    int row1;
    int col1;
    printf("enter the row:");
    scanf("%d",&row1);
    printf("enter the col:");
    scanf("%d",&col1);
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int b[100][100];
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            b[i][j]=a[j][i];
      }
    }
    printf("the original matrix is ");
    for(int i=0;i<row1;i++){
        printf("\n");
        for(int j=0;j<col1;j++){
            printf("%d ",a[i][j]);
        }
    }
    printf("\ntranspose of the matrix is\n ");
    for(int i=0;i<row1;i++){
        printf("\n");
        for(int j=0;j<col1;j++){
            printf("%d ",b[i][j]);
        }
    }
    int flag=1;
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            
            if(a[i][j]==b[i][j]){
                flag=1;
            }
            else{
                flag=0;
                
                break;
            }
            
        }
        if(flag==0){
            printf("\nnot a symetric matrix\n");
            break;
        }
        
    }
    if(flag==1){
        printf("\nsymetric matrix\n");
    }
    int r=0;
    for(int i=0;i<row1;i++){
        
        for(int j=0;j<col1;j++){
            if(i!=j && a[i][j]==0){
                r=1;
            }
            else if(i!=j && a[i][j]!=0){
                r=0;
                //printf("not a diagonal matrix");
                break;
            }
        }
        
    }
    if(r==0){
            printf("\nnot a diagonal matrix\n");
            
            }
    else{
            printf("\ndiagonal matrix\n");
    }
    int k=0;
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            if(i==j && a[i][j]==1){
                k=1;
            }
            else if(i==j){
                k=0;
                
                break;
            }
        }
        
    }
    if(r==0){
            printf("\nnot a identity matrix\n");
            
            }
    else{
            printf("\nidentity matrix\n");
    }
    printf("\nA*A TRANPOSE\n");
    int c[100][100];
    for(int i=0;i<row1;i=i+1){
        for(int j=0;j<col1;j++){
            int sum=0;
            for(int k=0;k<col1;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0;i<row1;i++){
        printf("\n");
        for(int j=0;j<col1;j++){
            printf("%d ",c[i][j]);
        }
    }
    printf("\n");
    printf("\nA+A TRANSPOSE \n");
    int d[100][100];
    for(int i=0;i<row1;i=i+1){
        for(int j=0;j<col1;j++){

                d[i][j]=a[i][j]+b[i][j];
            
        }
    }
    for(int i=0;i<row1;i++){
        printf("\n");
        for(int j=0;j<col1;j++){
            printf("%d ",d[i][j]);
        }
    }
}
