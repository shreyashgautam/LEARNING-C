#include<stdio.h>
int main(){
    int a[20];
    int n,p,x;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(x<a[i]){
            p=i;
            break;
        }
        else{
            p=i+1;
        }
    }
    for(int i=n;i>=p;i--){
        a[i]=a[i-1];
    }
    a[p]=x;
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}