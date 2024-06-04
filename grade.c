#include<stdio.h>
int main(){
    int a;
    printf("enter your marks");
    scanf("%d",&a);
    if (a>=90){
        printf("you secured A");
    }
    
    else if (80<a && a<90){
        printf("you secured B");
    }
    else if (70<a && a<80){
        printf("you secured C");
    }
    else if (40<a && a<70){
        printf("you secured D");
    }
    else {
        printf("you have failed");
    }
    return 0;

}