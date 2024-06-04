#include<stdio.h>
#include<string.h>
int main(){
    char a[30];
    fgets(a,40,stdin);
    // int l;
    // l=strlen(a);
    // printf("%d",l);
    char b[40];
    strcpy(b,a);
    puts(b);
    strcat(a,b);
    
    return 0;


}
