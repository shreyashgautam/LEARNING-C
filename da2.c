#include<stdio.h>
int main(){
    int a;
    int b;
    char x[100];
    printf("Enter CUSTOMER NO. and UNITS consumed : ");
    fgets(x,100,stdin);
    sscanf(x,"%d %d",&a,&b);
    
    float total=0;
    if(b<=200){
        total=(float)b*0.50;
    }
    else if(b>=201 && b<=400){
        total=(float)100+(b-200)*0.65;
    }
    else if(b>=401 && b<=600){
        total=(float)230+(b-400)*0.80;
    }
    else if(b>=601){
        total=(float)390+(b-600)*1.00;
    }
    printf("Customer no : %d ",a);
    printf("Charges : %0.2f",total);
}