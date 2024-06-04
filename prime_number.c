#include<stdio.h>
int main(){
    int a;
    int count=0;
    int count2=0;
    scanf("%d",&a);
    for(int i =1;i<=a;i=i+1){
        if(a%i==0){
            count=count+1;
        }
        else{
            count2=count2+1;
        }
    }
    if (count>2){
        printf("the number is compostie");
    }
    else{
        printf("the number is prime");
    }
    
    
    return 0;
}

