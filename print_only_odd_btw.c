#include<stdio.h>
int main(){
    for(int i=5 ; i<=50;i=i+1){
        if(i%2==0){
            continue;
        }
        else{
            printf("%d\n",i);
        }
    }
    return 0;
}