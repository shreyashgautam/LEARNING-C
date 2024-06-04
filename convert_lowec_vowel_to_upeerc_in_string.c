#include<stdio.h>
int main(){
    char a[40];
    char b[40];
    fgets(a,40,stdin);
    for(int i =0;a[i]!='\0';i=i+1){
        if(a[i]=='a'){
            b[i]='A';
        }
        else if(a[i]=='e'){
            b[i]='E';
        }
        else if(a[i]=='i'){
            b[i]='I';
        }
        else if(a[i]=='o'){
            b[i]='O';
        }
        else if(a[i]=='u'){
            b[i]='U';
        }
        else{
            b[i]=a[i];
        }
    }
    puts(b);
    return 0;
}