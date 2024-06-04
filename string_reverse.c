#include <stdio.h>
int main(){
    char a[100];
    fgets(a,100,stdin);
    int count=0;
    for(int i=0;a[i]!='\0';i++){
        count++;
    }
    for(int j=count;j>=0;j--){
        printf("%c",a[j]);
    }
}