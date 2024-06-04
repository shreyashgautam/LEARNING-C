#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int b=0;
    int q,p;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            p=1;
            q=0;
        } 
        else{
            p=0;
            q=1;
        }
        printf("\n");
        for(int j=1;j<=i;j++){
            if(j%2==0){
                printf("%d",p);
            }
            else{
                printf("%d",q);
            }
        }
        
    }
}