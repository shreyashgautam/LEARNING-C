#include<stdio.h>
int main(){
   char a[100];
   fgets(a,100,stdin);
   for(int i=0;a[i]!='\0';i++){
    int temp=0;
    for(int j=i+1;a[j]!='\0';j++){
        if(a[i]>a[j]){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        }
       
    }
   }
   puts(a);
}