#include<stdio.h>
int main(){
    char a[40];
    char ch;
    int i=0;
    while (ch!='\n'){
        scanf("%c",&ch);
        a[i]=ch;
        i=i+1;

    }
    a[i]='\0';
    puts(a);
    return 0;
}