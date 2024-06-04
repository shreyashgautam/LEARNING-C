#include<stdio.h>
struct student{
    int roll;
    char name[10];

};
struct teacher{
    int roll;
    char name[10];

};
struct worker{
    int roll;
    char name[10];

};
int main(){
    printf("press 1 if student\n 2 if teacher\n 3 if worker\n");
    int a;
    scanf("%d",&a);
    struct student s[2];
    struct teacher t[2];
    struct worker  w[2];
    if (a==1){
        printf("hello student\n");
        printf("enter your roll number==");
        scanf("%d",&s[0].roll);
        printf("enter your name==");
        scanf("%s",&s[0].name);
        printf("hello mr %s roll number %d your data is stored successfully",s[0].name,s[0].roll);
    }
    else if(a==2){
        printf("hello proffesor\n");
        printf("enter your roll number==");
        scanf("%d",&t[0].roll);
        printf("enter your name==");
        scanf("%s",&t[0].name);
        printf("hello mr %s roll number %d your data is stored successfully",t[0].name,t[0].roll);

    }
    else if(a==3){
        printf("hello staff\n");
        printf("enter your roll number==");
        scanf("%d",&w[0].roll);
        printf("enter your name==");
        scanf("%s",&w[0].name);
        printf("hello mr %s roll number %d your data is stored successfully",w[0].name,w[0].roll);

    }
    else{
        printf("wrong input");
        
    }
    printf("\nthank you");
    return 0;
}