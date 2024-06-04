#include<stdio.h>
int sum(char x,int n,int *ptr);
int main(){
    char x;
    scanf("%c",&x);
    int n;
    scanf("%d",&n);
    int a[100];
    int s=sum(x,n,a);
    printf("%d",s);
    return 0;
}
int sum(char x,int n,int *ptr){
    int sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }
    if(x=='F'||x=='f'){
        for(int i=0;i<n;i++){
            if(i%2==0){
                sum=sum+ptr[i];
            }
        }
    }
    else if(x=='m'||x=='F'){
        for(int i=0;i<n;i++){
            if(i%2!=0){
                sum=sum+ptr[i];
            }
        }
    }
    return sum;
}