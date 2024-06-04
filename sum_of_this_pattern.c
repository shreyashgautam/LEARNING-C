#include<stdio.h>
#include<math.h>
//23. Write a program in C to find the sum of the series [x + x^3 + x^5 + ......].
int main(){
    int x;
    scanf("%d",&x);
    int a;
    int count=0;
    int sum=0;
    scanf("%d",&a);
    for(int i=1;;i++){
        int e=0;
        
        double f;
        if(count==a){
            break;
        }
        count++;
        if(i%2!=0){
            
            f=pow(x,i);
            e=(int)f;
            printf("x^%d+",i);
            sum=sum+e;
        }
        
        

    }
    printf("\n%d",sum);
}