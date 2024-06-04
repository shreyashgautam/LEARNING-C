#include<stdio.h>
void natural(int n,int k){
    if(n>=k){
        printf("%d\t",k);
        natural(n,k+1);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int k=1;
    natural(n,k);

}