#include<stdio.h>
int main(){
    for(int i =1 ; i <=10000;i=i+1){
        int a;
        scanf("%d",&a);
        if(a%2==0){
            continue;
        }
        else{
            break;
        }
    }
    return 0;
}
