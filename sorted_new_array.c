#include<stdio.h>
int main(){
    int a[100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&a[n]);
    for(int i=0;i<=n;i++){
        int temp=0;
        for(int j=i+1;j<=n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("output\n");
    for(int i=0;i<=n;i++){
        printf("%d\n",a[i]);
    }
}