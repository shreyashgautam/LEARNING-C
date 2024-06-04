#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int combination(int n,int r){
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int main(){
    int n;
    int j,space,i;
    printf("enter n:");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(int space=1;space<=(n-i);space++){
            printf(" ");
        }
        for(j=0;j<=i;j++){
            int icj=combination(i,j);
            printf("%d ",icj);
            }
        // for(int k=1;space<=2*(n-i);k++){
        //     printf(" ");
        // }
        printf("\n");
    }
    //     for(j=0;j<=i;j++){
    //         int icj=combination(i,j);
    //         printf("%d ",icj);
    //         }
    // }
        printf("\n");
}
