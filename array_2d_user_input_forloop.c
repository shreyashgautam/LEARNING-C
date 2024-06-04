//input marks of 2student in 3 subject
#include<stdio.h>
int main(){
    int marks[2][3];
    for(int i=0;i<3;i=i+1){
        printf("%d",i);
        scanf("%d",&marks[0][i]);
    }
    for(int i=0;i<3;i=i+1){
        printf("%d",i);
        scanf("%d",&marks[1][i]);
    }
    for(int i=0;i<2;i=i+1){
        for(int j =0;j<3;j=j+1){
            printf("%d-%d\n",i,marks[i][j]);
        }
    }
    return 0;
}