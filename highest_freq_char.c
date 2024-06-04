#include<stdio.h>
int main(){
    char a[100];
    scanf("%s",a);
    int fr[100];
    int c=-1;
    for(int i=0;a[i]!='\0';i++){
        fr[i]=-1;
        c++;
    }
    for(int i=0;i<c;i++){
        int temp=1;
        for(int j=i+1;j<c;j++){
            if(a[i]==a[j]){
                temp++;
                fr[j]=0;
            }
        }
        if(fr[i]!=0){
            fr[i]=temp;
        }
    }
    int max=0;
    int pos=0;
    for(int i=0;i<c;i++){
        if(max>fr[i]){
            max=fr[i];
            pos=i;
        }
    }
    printf("%c",a[pos]);
    // for(int i=0;i<c;i++){
    //     if(fr[i]!=0){
    //         printf("%c --- %d\n",a[i],fr[i]);
    //     }
    // }
}