#include<stdio.h>
int main(){
    char a[40];
    fgets(a,40,stdin);
    char max;
    max=a[0];
    for(int i=0;a[i]!='\0';i=i+1){
        if(a[i]>max){
            max=a[i];
        }
    }
    printf("%c",max);
    return 0;
}
