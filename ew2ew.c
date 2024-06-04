#include<stdio.h>
int rex(int x,int n);
int main(){
    int x;
    printf("enter the value of a\n");
    scanf("%d",&x);
    int n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    int result;
    result= rex(x,n);
    printf("value of %d power %d is %d",x,n,result);
}
int rex(int x,int n){
    
    if(n==0){
      return 1; 
    }
    else{
        return x*rex(x,n-1);
        
    }
    
}