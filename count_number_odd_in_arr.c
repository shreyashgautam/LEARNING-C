#include<stdio.h>
int main(){
    int n;
    int count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i=i+1){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i=i+1){
        if(arr[i]%2==0){
            continue;
        }
        else{
            count=count+1;
        }
    }
    printf("count %d",count);
    return 0;
}