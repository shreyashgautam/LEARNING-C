#include<stdio.h>
int max(int *ptr,int max1,int n,int i);
int main(){
    int n;
    scanf("%d",&n);
    int a[100];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max1=0;
    int i=0;
    printf("%d",max(a,max1,n,i));
}
int max(int* ptr,int max1,int n,int i){
    if(i<n){
        
        if(max1<ptr[i]){
            max1=ptr[i];
        }
        max(ptr,max1,n,i+1);
    }
    else{
        return max1;
    }
}