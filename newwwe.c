#include<stdio.h>
int main(){
    int a[100][100];
    int b[100][100];
    int row1;
    int col1;
    printf("enter the row of matrix 1");
    scanf("%d",&row1);
    printf("enter the row of matrix 1");
    scanf("%d",&col1);
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
           scanf("%d",&a[i][j]);

        }
    }
    int row2;
    int col2;
    printf("enter the row of matrix 2");
    scanf("%d",&row2);
    printf("enter the row of matrix 2");
    scanf("%d",&col2);
    for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
           scanf("%d",&b[i][j]);

        }
    }
    for(int w=1;w<2;w++){
        if(row1!=col2 ){
            break;
        }
        else if(col1!=row2){
            break;
        }
        else{
            continue;
        }
    }
    int c[100][100];
    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            int sum=0;
            for(int k=0;k<row2;k++){
                sum=sum+a[i][k]*b[k][j];
                c[i][j]=sum;
            }
        }
    }
    for(int i=0;i<row2;i++){
        printf("\n");
        for(int j=0;j<col2;j++){
           printf("%d\t",c[i][j]);

        }
    }
}