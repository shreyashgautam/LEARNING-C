#include <stdio.h> 
#include<math.h> 
int main() { 
double principal ; 
double r ; 
double t ; 
scanf("%lf",&principal);
scanf("%lf",&r);
scanf("%lf",&t);
double Amount = principal * ((pow((1 + r / 100),t))); 
double CI = Amount - principal; 
printf("CI is : %lf",CI); 
return 0; 
} 
