#include<stdio.h>
#include<stdlib.h>
int main(){
    int*ptr;
    ptr=(int*)calloc(5,sizeof(int));
    for(int i=0;i<5;i=i+1){
        scanf("%d",&ptr[i]);
    }
    int n;
    scanf("%d",&n);
    ptr=realloc(ptr,n);
    for(int i=0;i<n;i=i+1){
        scanf("%d",&ptr[i]);
    }
    printf("output");
    for(int i=0;i<n;i=i+1){
        printf("%d\n",ptr[i]);
    }
    return 0;
}