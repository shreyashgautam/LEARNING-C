#include<stdio.h>
int main(){
    int a;
    printf("enter the number of rows");
    scanf("%d",&a);
    int b=1;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=2*(a-i);j++){
            printf(" ");
        }
        
        for(int k=1;k<2*i;k++){
            printf("* ");
            b++;
            
        }
    
        printf("\n");
    }
}