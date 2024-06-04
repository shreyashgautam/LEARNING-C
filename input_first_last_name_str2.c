#include<stdio.h>
int main(){
    char fullname[40];
    //gets(fullname);
    fgets(fullname,40,stdin);
    //puts(fullname);
    printf("%s",fullname);
    return 0;
}