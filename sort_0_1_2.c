#include<stdio.h>
int main(){
    int a[100],n;
    printf("enter the size of array");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int b[100];
    int k=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            b[k]=a[i];
            k++;
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]==1){
            b[k]=a[i];
            k++;
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]==2){
            b[k]=a[i];
            k++;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d\t",b[i]);
    }
}