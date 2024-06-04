#include<stdio.h>
#include<string.h>
char print(char *a);
int main(){
    char a[100];
    fgets(a,100,stdin);
//char x[100]= print(a);
    printf("%s",print(a));
}
char print(char *a){
    char b[100];
    int j=0;
    int x=strlen(a);
    
    for(int i=0;i<x;i++){
        if(a[i]>=65 && a[i]<=90){
            b[j]=a[i];
            j++;
            //printf("%c",a[i]);
        }
        else if(a[i]>=97 && a[i]<=122){
            b[j]=a[i];
            //printf("%c",a[i]);
            j++;
        }
    }
    return b;
}