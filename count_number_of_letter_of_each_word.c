#include<stdio.h>
int main(){
    char a[100];
    fgets(a,100,stdin);
    int count=0;
    for(int i=0;a[i]!='\0';i++){
        if(a[i]==' '){
            printf("%d\n",count);
            count=-1;
        }
        count++;
    
    }
    printf("%d",count-1);
}