#include<Stdio.h>
int main(){
    int a;
    int b=1;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        printf("\n");
        for(int j=1;j<=i;j++){
            if(i%2!=0){
                if(j%2==0){
                    b=0;
                }
                else{
                    b=1;
                }
                
            }
            else{
                if(j%2!=0){
                    b=0;
                }
                else{
                    b=1;
                }
            }
            printf("%d ",b);
        }
    }
}