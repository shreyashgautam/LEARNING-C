#include<stdio.h>
int main(){
    int arr[2][10];
    for(int i=0;i<10;i=i+1){
        arr[0][i]=2*(i+1);
    }
    for(int i=0;i<10;i=i+1){
        arr[1][i]=3*(i+1);
    }
    for(int k= 0;k<10;k=k+1){
        printf("%d\t",arr[0][k]);
        }
    printf("\n");
    for(int k= 0;k<10;k=k+1){
        printf("%d\t",arr[1][k]);
        }
    

    return 0;
}