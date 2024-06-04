#include<stdio.h>
int main(){
    int a[100];
    int even[100];
    int odd[100];
    int count=0;
    int j=0;
    int k=0;
    int counte=0;
    int counto=0;
    for(int i=0;;i++){
        int b;
        scanf("%d",&b);
        if(b==-1){
            break;
        }
        a[i]=b;
        count++;
    }
    for(int i=0;i<count;i++){
        if(a[i]%2==0){
            even[j]=a[i];
            j++;
            counte++;
        }
        else{
            odd[j]=a[i];
            k++;
            counto++;
        }

    }
    for(int j=0;j<counte;j++){
        printf("%d\t",even[j]);
    }
}
