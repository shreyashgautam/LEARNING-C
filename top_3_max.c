#include<Stdio.h>
int main(){
    int a[100];
    int c=0;
    for(int i=0;;i++){
        int b;
        scanf("%d",&b);
        if (b==-1){
            break;
        }
        
        a[i]=b;
        c=c+1;
    }
    int temp=0;
    for(int i=0;i<c;i++){
        for(int j=i+1;j<c;j++)
        if(a[i]>a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;

        }
        
        
    }
    printf("\n");
    for(int i=0;i<3;i++){
        printf("%d\t",a[i]);
    }
    
}