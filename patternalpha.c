#include<stdio.h>
int main(){
    int a;
    int b=65;
    int c=1;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        printf("\n");
        b=65;
        c=1;
        for(int j=0;j<=i;j++){
            if(i%2!=0){
                printf("%c ",b);
                b++; 
            }
            else{
                printf("%d ",c);
                c++; 
            }
        }
    }
}