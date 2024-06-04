#include<stdio.h>
void slice(char a[],int n,int m);
int main(){
    char a[50];
    fgets(a,50,stdin);
    int n;
    int m;
    scanf("%d",&n);
    scanf("%d",&m);
    slice(a,n,m);
    return 0;
}
void slice(char a[],int n,int m){
    int i;
    for(i=n;i<=m;i=i+1){
      printf("%c",a[i]); 
    }
}