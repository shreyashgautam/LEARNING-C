#include<stdio.h>
int main(){
    int x=0;
    char arr[100];
    fgets(arr,100,stdin);
    for(int i=0;arr[i]!='\0';i++){
        if(i==0){
            if(arr[i]>='a'&&arr[i]<='z'){
                arr[i]-=32;
            }
        }
        else if(arr[i]!=' '){
            if(arr[i]>='A'&&arr[i]<='Z'){
                arr[i]+=32;
            }
        }
        else if(arr[i]==' '){
            x=i;
        }
    }
    for(int i=x;arr[i]!='\0';i++){
       
                if(arr[i]>='a'&&arr[i]<='z'){
                arr[i]-=32;
            }
            
    }
    puts(arr);

}