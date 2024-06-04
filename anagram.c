#include<stdio.h>
int main(){
    char a[100];
    char b[100];
    scanf("%s",a);
    scanf("%s",b);
    int c=-1;
    int d=-1;
    int x=0;
    for(int i=0;a[i]!='\0';i++){
        c++;
    }
    for(int i=0;b[i]!='\0';i++){
        d++;
    }
    if(c==d){
        for(int i=0;i<=c;i++){
            int temp=0;
            for(int j=0;j<=d;j++){
                if(a[i]==b[j]){
                    temp=1;
                    break;
                }
            }
            if(temp==0){
                x=1;
                break;
            }
        }
        if(x==1){
            printf("not anagram");
        }
        else{
            printf("anagram");
        }
    }
    else{
        printf("not anagram");
    }
}