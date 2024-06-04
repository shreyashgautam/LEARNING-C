#include<stdio.h>
int main(){
    int a[100];
    int count=0;
    for(int i=0;;i++){
        int b;
        scanf("%d",&b);
        if(b==-1){
            break;
        }
        else{
            a[i]=b;
            count++;
        }
    } 
    int temp=0;
    int ans=0;
    int max=0;
    for(int j=0;j<count-1;j++){
        if(a[j]<a[j+1]){
            ans=ans+1;
        }
        else{
            if(ans>max){
                max=ans;
                ans=0;
            }
        }
    }
    printf("length is %d",max+1);
}