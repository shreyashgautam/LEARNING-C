#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("text.txt","w");
    int n;
    scanf("%d",&n);
    for(int i=1;i<n;i=i+2){
        fprintf(fptr,"%d\n",i);
    }
    
    return 0;
}   