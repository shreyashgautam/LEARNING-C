#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    fgets(a,100,stdin);
    int b;
    b=strlen(a);
    for(int i=b;i>=0;i--){
        printf("%c",a[i]);
    }
    
}