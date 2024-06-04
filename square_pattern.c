#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i=i+1){
        printf("/n");
        for(int j =1;j<=a;j=j+1){
            printf("*");
            
        
        } 
        printf("/n");
    }
    return 0;
}