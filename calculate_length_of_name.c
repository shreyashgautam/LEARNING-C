#include<stdio.h>
int main(){
    char a[40];
    int count=0;
    int con=0;
    fgets(a,40,stdin);
    for(int i=0;i<40;i=i+1){
        if(a[i]!='\0'){
            count=count+1;
        }
        else if(a[i]==' '){
            con=con+1;
        }
        else{
            break;
        }
    }
    count=count-1;
    printf("%d",count);
    return 0;
}