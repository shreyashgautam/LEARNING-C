#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int x[100];
    int fr[100];
    for(int i=0;i<a;i++){
        scanf("%d",&x[i]);
        fr[i]=-1;
    }
    for(int i=0;i<a;i++){
        int temp=1;
        for(int j=i+1;j<a;j++){
            if(x[i]==x[j]){
                fr[j]=0;
                temp++;
            }
        }
        if(fr[i]!=0){
            fr[i]=temp;
        }
    }
    for(int i=0;i<a;i++){
        if(fr[i]!=0){
            printf("the frequency of %d is %d\n",x[i],fr[i]);
        }
    }


}