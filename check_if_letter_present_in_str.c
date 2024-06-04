#include<stdio.h>
int main(){
    char a[50];
    char b;
    fgets(a,40,stdin);
    scanf("%c",&b);
    for(int i =0;a[i]!='\0';i=i+1){
        if(a[i]==b){
            printf("the letter is presnet");
            break;
        }
        else{
            printf("the letter is absent");
            break;
        }
    }
    return 0;
}