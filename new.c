#include<stdio.h>
int main(){
   int m;
   int n;
   scanf("%d %d",&n,&m);
   int count=0;
   int sum=0;
   for(int i=n;;i++){
    count++;
    if(i%2==0){
        sum=sum+i;
       
    }
    if(count==m){
        break;
    }
   }
   printf("%d",sum);

}