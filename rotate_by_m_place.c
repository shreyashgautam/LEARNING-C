#include<stdio.h>
int main(){
    int a[100];
    int n;
    printf("size of array");
    scanf("%d",&n);
    int m;
    printf("point to rotate");
    scanf("%d",&m);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
   
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
     printf("\n");
    for(int i=0;i<m;i++){
        printf("%d\t",a[i]);
    }
    for(int i=(n-1);i>=m;i--){
        printf("%d\t",a[i]);
    }
}