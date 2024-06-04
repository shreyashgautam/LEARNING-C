#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        printf("\n");
        c=1;
        for(int j=0;j<=i;j++){
            if(c%2!=0){
                printf("%d ",c);
                c++;
            }
            else{
                printf("%d ",c+1);
            }
            c++;
        }
    }
}