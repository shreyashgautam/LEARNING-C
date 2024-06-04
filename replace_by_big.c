#include<Stdio.h>
int main(){
    int a[100];
    int n;
    printf("enter the side of array");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("old array");
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++){
        int max=0;
        for(int j=i+1;j<n;j++){
            if(max<a[j]){
                max=a[j];
            }

        }
        a[i]=max;
    }
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}