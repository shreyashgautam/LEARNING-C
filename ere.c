#include<Stdio.h>
#include<math.h>
int main(){
    int a;
    scanf("%d",&a);
    int rem;
    int z=0;
    int sum=0;
    while(a>0){
        rem=a%10;
        sum=(int)sum+rem*pow(2,z);
        z++;
        a=a/10;
    }
    printf("%d",sum);
}