#include<Stdio.h>
int main(){
    char a[100];
    gets(a);
    int x;
    sscanf(a,"%d",&x);
    printf("before reverse number %d",x);
    int rem;
    int rev=0;
    while(x>0){
        rem=x%10;
        rev=rev*10+rem;
        x=x/10;
    }
    printf("\nafter reverse %d",rev);
}