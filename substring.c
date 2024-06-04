#include<stdio.h>
#include<string.h>
void del(char a[100],int b,int n);
void sub(char a[100],int b,char w[100]);
int main(){
    char a[100];
    int b;
    char w[100];
    int n;
    gets(a);
    gets(w);
    scanf("%d",&b);
    scanf("%d",&n);
    printf("\n the value of string after del is \n");
    del(a,b,n);
    printf("\n the value of string after adding is \n");
    sub(a,b,w);
}
void del(char a[100],int b,int n){
    char c[100];
    int j=0;
    int i=0;
    for(i=0;i<b;i++){
        c[j]=a[i];
        j++;
    }
    i=i+n;
    for(;i<strlen(a);i++){
        if(a[i]=='\0'){
            continue;
        }
        c[j]=a[i];
        j++;
        
    }
    printf("%s",c);
    
}
void sub(char a[100],int b,char w[100]){
    char r[100];
    int i=0;
    int j=0;
    for(i=0;i<b;i++){
        r[i]=a[i];
    }
    int q;
    q=strlen(w);
    for(i=b;i<b+q;i++){
        r[i]=w[j];
        j++;
    }
    int e;
    e=strlen(a);
    
    for(int f=b;f<e;f++){
        r[i]=a[f];
        i++;
    }
    printf("%s",r);
}