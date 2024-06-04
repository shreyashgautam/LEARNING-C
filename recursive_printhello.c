#include<stdio.h>
void printh(int count);
int main(){
    int count;
    scanf("%d",&count);
    printh(count-1);
    return 0;
}
void printh(int count){
   
    if (count==0){
        return;
    }
    else{
        
        printf("hello world\n");
        printh(count-1);
    }
}