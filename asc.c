#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    scanf("%s",a);
    int count=-1;
    for(int i=0;a[i]!='\0';i++){
        count++;
    }
    for(int i=0;i<count;i++){
        for(int j=0;j<count;j++){
            if(a[i]<a[j]){
                char x;
                x=a[i];
                a[i]=a[j];
                a[j]=x;
            }
        }
    }
    for(int i=0;i<count;i++){
        printf("%c",a[i]);
    }
}