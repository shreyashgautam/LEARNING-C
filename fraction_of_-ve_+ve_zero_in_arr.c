#include<stdio.h>
int main(){
    int n;
    int a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int countp=0;
    int countn=0;
    int countz=0;
    int total=n;
    for(int i=0;i<n;i++){
        if(a[i]>0){
            countp++;
        }
        else if(a[i]<0){
            countn++;
        }
        else if(a[i]==0){
            countz++;
        }
    }
    float x
    float y;
    float z;
     x=(float)countp/total;
     y=(float)countn/total;
     z=(float)countz/total;
    printf("%0.2f\n",x);
    printf("%0.2f\n",y);
    printf("%0.2f\n",z);

}