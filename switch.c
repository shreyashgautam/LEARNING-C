#include<stdio.h>
int main(){
    int a; //1-mon 2-tue 3-wed other-any other number
    scanf("%d",&a);
    switch(a){
        case 1: printf("it is monday");
                 break;
        case 2: printf("it is tuesday");
                 break;
        case 3: printf("it is wednesday");
                 break;
        default:printf("other day");
    }
    return 0;

        
    
}