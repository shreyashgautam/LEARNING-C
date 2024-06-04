#include<stdio.h>
void sum(int n ,int count,int i);
int main(){
    int n;
    int count=0;
    int i=0;
    scanf("%d",&n);
    sum(n,count,i);
    return 0;
}
void sum(int n,int count,int i ){
    
    if (i==n+1){
        printf("%d",count);
        return;
   }
   else{
    count=count+i;
    sum(n,count,i+1);
    printf("%d",count);
  }
}