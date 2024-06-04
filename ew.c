#include<stdio.h>
int main(){
    int a[100];
    int target;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the target");
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==target){
                printf("[%d,%d]",i,j); 
           }
        }
    }
}