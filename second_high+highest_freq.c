#include<stdio.h>
int main(){
    int n;
    int fr[100];
    printf("enter the array length ");
    scanf("%d",&n);
    int a[100];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        fr[i]=-1;
    }
    int temp=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        int ctr=0;
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                ctr++;
                fr[j]==0;
            }
        }
        if(fr[i]!=0){
            fr[i]=ctr;
        }
    }
    int max=0;
    int pos=0;
    for(int i=0;i<n;i++){
        if(max<fr[i]){
            max=fr[i];
            pos=i;
        }

    }
    printf("output is \n");
    printf("%d\n",a[pos]);
    printf("%d",a[1]);
}