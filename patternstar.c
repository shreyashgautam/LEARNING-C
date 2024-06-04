#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a%2!=0){
        for(int i=0;i<a;i++){
            printf("\n");
            for(int j=0;j<a;j++){
                if(j==a/2 || i==a/2){
                    printf("*");
                }
                else{
                    printf(" ");
                }
                }
        }
    }
}