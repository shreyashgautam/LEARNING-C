#include<stdio.h>
#include<stdlib.h>
int main(){
    float*ptr;
    ptr=(float*)malloc(4*sizeof(float));
    for(int i=0;i<5;i=i+1){
        printf("%d",i);
        scanf("%f ",&ptr[i]);
    }
    for(int i=0;i<5;i++){
        printf("prize of %d product is %f\n",i,ptr[i]);
    }
    return 0;
}