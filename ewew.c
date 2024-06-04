#include<stdio.h>
int main(){
    int a[100];
    int fr[100];
    int n;
    printf("enter the size of ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);   
        fr[i]=-1;
    }
    for(int i=0;i<n;i++){
        int c=1;
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                c++;
                fr[j]=0;
            }
        }
        if(fr[i]==-1){
            fr[i]=c;
        }
        
    }
    int x;
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(a[i]==x){
            printf("%d appears %d times",a[i],fr[i]);
            break;
        }
    }
}