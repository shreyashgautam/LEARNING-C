#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("text.txt","r");
    int a;
    fscanf(fptr,"%d",&a);
    int b;
    fscanf(fptr,"%d",&b);
    fclose(fptr);
    fptr=fopen("text.txt","w");
    int c;
    c=a+b;
    fprintf(fptr,"%d",c);
    return 0;
}