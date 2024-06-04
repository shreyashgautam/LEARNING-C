#include<stdio.h>
#include<string.h>
void swap(char *x,char *y){
    char temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void permutation(char *str,int l,int r){
    if(l==r){
        
        printf("%s\n",str);
    }
    else{
        for(int i=l;i<=r;i++){
            swap((str+l),(str+i));
            permutation(str,l+1,r);
            swap((str+l),(str+i));
        }
    }
}
int main(){
    char str[100];
    scanf("%s",str);
    int n=strlen(str);
    permutation(str,0,n-1);
}