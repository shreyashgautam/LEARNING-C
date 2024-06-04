#include<stdio.h>
int main(){
    int a[100],b[100],n1;
    int flag[100];
    printf("enter the size of the array1");
    scanf("%d",&n1);
    for(int i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    int n2;
    printf("enter the size of the array2");
    scanf("%d",&n2);
    for(int i=0;i<n2;i++){
        scanf("%d",&b[i]);
        flag[i]=0;
    }
    for(int j=0;j<n2;j++){
        for(int i=0;i<n1;i++){
            if(b[j]==a[i]){
                flag[j]=1;
                break;
            }
            else{
                flag[j]=0;
            }
        }
    }
    for(int k=0;k<n2;k++){
        if(flag[k]==0){
            printf("not a substring");
            break;
        }
        else{
            printf("substring");
            break;
        }
    }
}