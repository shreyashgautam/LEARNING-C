#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=0;i<=a;i++){
        int count=0;
        for(int j=2;j<=i/2;j++) {
            if(i%j==0){
                count++;
                break;
            }
        } 
        if(count==0){
            if(i==0 || i==1){
                continue;
            }
            else{
                printf("%d\t",i);

            }
        }
        }
}
