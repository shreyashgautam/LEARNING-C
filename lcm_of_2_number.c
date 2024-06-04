#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    scanf("%d %d",&a,&b);
    for(int i=2;;i++){
        if(i%a==0 && i%b==0){
            printf("%d is the lcm",i);
            break;
        }
    }
}