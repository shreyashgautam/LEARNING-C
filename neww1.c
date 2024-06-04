#include<stdio.h>
int main(){
    char arr[100];
    scanf("%s",arr);
    int n=0;
    for(int i=0;arr[i]!='\0';i++){
        n++;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>='a'&& arr[i]<='z'){
            arr[i]-=32;
        }
        else if(arr[i]>='A'&& arr[i]<='Z'){
            arr[i]+=32;
        }
    }
    puts(arr);
}