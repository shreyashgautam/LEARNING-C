#include<stdio.h>
#include<string.h>

int main(){
    char a[100][100];
    char b[100][100];
    char c[100][100];
    for(int i=0;i<3;i++){
        printf("enter the title of book %d",i);
        gets(a[i]);
        printf("enter the author of book %d",i);
        gets(b[i]);
        printf("enter the category of book %d",i);
        gets(c[i]);
    }
    char s[100];
    char w[100];
    char x[100];
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            if(strcmp(c[i],c[j])>0){
                strcpy(s,b[i]);
                strcpy(b[i],b[j]);
                strcpy(b[j],s);
                //
                strcpy(w,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],w);
                //
                strcpy(x,c[i]);
                strcpy(c[i],c[j]);
                strcpy(c[j],x);
                }
            else if(strcmp(c[i],c[j])==0){
                    if(strcmp(a[i],a[j])>0){
                        // strcpy(s,b[i]);
                        // strcpy(b[i],b[j]);
                        // strcpy(b[j],s);
                //
                        strcpy(w,a[i]);
                        strcpy(a[i],a[j]);
                        strcpy(a[j],w);
                //
                        // strcpy(x,c[i]);
                        // strcpy(c[i],c[j]);
                        // strcpy(c[j],x);
                    }
                }
            
        }
    }
    for(int i=0;i<3;i++){
        printf("category of book %s\t",c[i]);
        printf("title is %s\t",a[i]);
        printf("author is %s\n",b[i]);
        
    }
}