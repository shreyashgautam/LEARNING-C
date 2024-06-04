#include<stdio.h>
int main(){
    char a;
    scanf("%s",&a);
    if (a>='A' && a<='Z'){
        printf("upper case");
    }
    else{
        printf("lower case");
    }
    return 0;
}   