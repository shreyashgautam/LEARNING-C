#include<stdio.h>
int main(){
    char operati;
    double n1,n2;
    printf("Enter operator(*,-,+,/):");
    scanf("%c",&operati);

    printf("\n");
    printf("enter first integer:");
    scanf("%lf",&n1);
    printf("enter second integer:");
    scanf("%lf",&n2);
    
    switch(operati){
    
        case '*':
            printf("%lf*%lf=%lf",n1,n2,n1*n2);
            break;
        case '-':
            printf("%lf-%lf=%lf",n1,n2,n1-n2);
            break;
        case '+':
            printf("%lf+%lf=%lf",n1,n2,n1+n2);
            break;
        case '/':
            printf("%lf/%lf=%lf",n1,n2,n1/n2);
            break;
        default:
            printf("error!");
        }
        return 0;
}

