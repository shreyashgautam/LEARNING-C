#include<stdio.h>
void fact(int n);
int main(){
    int n;
    scanf("%d",&n);
    fact(n);
}
void fact(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        float fact=1;
        
        for(int j=1;j<=i;j++){
            fact=fact*j;
        }
        if(i!=n){
            printf("%d!/%d+",i,i);
        }
        else{
            printf("%d!/%d",i,i);
        }
        sum=sum+fact/i;
    }
    printf("\n%d",sum);
}