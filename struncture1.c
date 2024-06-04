#include<stdio.h>
//defined---
struct student{
    char *name;
    int roll;
    float cgpa;
};
int main(){
    struct student s1;
    s1.cgpa=7.5;
    s1.name="shreyash";
    s1.roll=10;
    printf("%s\n",s1.name);
    printf("%f\n",s1.cgpa);
    printf("%d\n",s1.roll);
    return 0;

}