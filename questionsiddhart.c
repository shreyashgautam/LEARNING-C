#include<stdio.h>
typedef struct student{
    int rollno;
    char name[100];
    int age;
    float percent;
}student;
int main(){
    //using dot operator
    student s1;
    scanf("%d",&s1.rollno);
    scanf("%s",s1.name);
    scanf("%d",&s1.age);
    scanf("%f",&s1.percent);
    student s2;
    student *ptr=&s2;
    scanf("%d",&ptr->rollno);
    scanf("%s",ptr->name);
    scanf("%d",&ptr->age);
    scanf("%f",&ptr->percent);
    //printing it
    printf("%d\t",s1.rollno);
    printf("%s\t",s1.name);
    printf("%d\t",s1.age);
    printf("%f\n\n",s1.percent);
    printf("%d\t",ptr->rollno);
    printf("%s\t",ptr->name);
    printf("%d\t",ptr->age);
    printf("%f\n",ptr->percent);
}
