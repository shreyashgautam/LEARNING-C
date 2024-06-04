#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("text.txt","r");
    if(fptr==NULL){
        printf("do not exist");
    }
    else{
        printf("exist");
    }
    int ch;
    for(int i=0;i<2;i=i+1){
        fscanf(fptr,"%d",&ch);
        printf("%d",ch);
    }
    fclose(fptr);
    return 0;
}