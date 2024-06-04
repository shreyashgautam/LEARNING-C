#include<stdio.h>
//defined---
struct student{
    char *name;
    int roll;
    float cgpa;
};
int main(){
    struct student s1;
    struct student s2;
    struct student s3;
    struct student s4;
    gets(s1.name);
    gets(s2.name);
    gets(s3.name);
    scanf("%d",&s1.roll);
    scanf("%d",&s2.roll);
    scanf("%d",&s3.roll);
    scanf("%f",&s1.cgpa);
    scanf("%f",&s2.cgpa);
    scanf("%f",&s3.cgpa);
    printf("%f",(s1.cgpa+s2.cgpa+s3.cgpa)/3.0);
    
}
