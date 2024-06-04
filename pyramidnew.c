#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b=1;
    for(int i=1;i<=a;i++){
        printf("\n");
        b=1;
        for(int space=1;space<=(a-i);space++){
            printf(" ");
        }

        for(int j=1;j<=i;j++){
            printf("%d ",b);
            if(j>i/2){
                b--;
            }
            else{
                b++;
            }
        }
    }
}