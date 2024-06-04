#include<stdio.h>
int main(){
    char a[50];
    char b[50]; 
    int k=0;
    gets(a);
    for(int i =0;a[i]!='\0';i=i+1){
        b[i]=a[i+k];
        if(a[i]==' '){
            k=k+1;
        }
    }
    puts(b);
    return 0;
}