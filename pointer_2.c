#include<stdio.h>
int main(){
  int a;
  a=22;
  int*ptr=&a;
  int**pptr= &ptr;
  printf("%d\n",*ptr);
  printf("%d",**pptr);  
  return 0;
}