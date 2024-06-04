#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b=1;
    for(int i=1;i<=2*a;i=i+2){
        printf("\n");
        
        for(int space=1;space<=(2*a-i);space++){
            printf(" ");
        }

        for(int j=1;j<=i;j++){
            printf("* ");
            
        }
    }
    for(int i=2*a-3;i>=1;i=i-2){
        printf("\n");
        b=1;
        for(int space=1;space<=(2*a-i);space++){
            printf(" ");
        }

        for(int j=1;j<=i;j++){
            printf("* ");
            
        }
    }
}