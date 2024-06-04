#include<stdio.h>
int main(){
    int a[100];
    int n;
    printf("enter the size of array");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int b[100];
    int t;
    printf("Enter the target point");
    scanf("%d",&t);
    int x;
    x=n-t;
    int j=0;
    for(int i=0;i<n;i++){
        if(i==x){
            continue;
        }
        else{
            b[j]=a[i];
            j++;
        }
    }
    for(int i=0;i<n-1;i++){
        printf("%d\t",b[i]);
    }
}