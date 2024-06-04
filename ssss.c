#include<stdio.h> 
int main()   {
int i=4;
int j=-1;
int k=0;
int w,x,y,z;  
w=i|j|k;
x=i&&j&&k;  
y=i|j&&k;  
z=i&&j|k;  
printf("%d, %d, %d, %d", w, x, y, z);  
return 0;  
}