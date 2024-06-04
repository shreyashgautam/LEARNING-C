#include<stdio.h>
int main(){
    int aadhar[5];
    int *ptr=&aadhar[0];
    for(int i=0;i<5;i=i+1){
        printf("%d",i);
        scanf("%d",(ptr+i));
    }
    for(int i =0;i<5;i=i+1){
        printf("%d\n",*(ptr+i));
    }
    return 0;
}