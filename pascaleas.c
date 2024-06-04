#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int coef=1;
    for(int i=0;i<=a;i++){
        printf("\n");
        for(int j=1;j<=(a-i);j++){
            printf(" ");
        }
        
        for(int k=0;k<=i;k++){
            if(k==0||i==0){
                coef=1;
            }
            else{
                coef=coef*(i-k+1)/k;
                
            }
            printf("%d ",coef);
        }
        
    }
}