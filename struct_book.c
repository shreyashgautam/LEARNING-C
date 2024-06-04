#include<stdio.h>
#include<String.h>
typedef struct student1{
    int roll_number;
    char name[100];
    char department[100];
    char course[100];
    int year;
}student;
void fun1(student x,student y){
    if(strcmp(x.department,y.department)==0){
        printf("you belong to same department");
    }
    else{
        printf("sorry");
    }
}
void fun2(student x,student y){
    if(strcmp(x.name,y.name)==0){
        printf("you belong to same name");
    }
    else{
        printf("sorry");
    }
}
void fun3(student x,student y){
    if(strcmp(x.course,y.course)==0){
        printf("you belong to same course");
    }
    else{
        printf("sorry");
    }
}
void fun4(student x,student y){
    if(x.year == y.year){
        printf("you belong to same year");
    }
    else{
        printf("sorry");
    }
}
int main(){
    student s1;
    student s2;
    scanf("%d",&s1.roll_number);
    scanf("%s",&s1.name);
    scanf("%s",&s1.department);
    scanf("%s",&s1.course);
    scanf("%d",&s1.year);



    scanf("%d",&s2.roll_number);
    scanf("%s",&s2.name);
    scanf("%s",&s2.department);
    scanf("%s",&s2.course);
    scanf("%d",&s2.year);
    fun1(s1,s2);
    fun2(s1,s2);
    fun3(s1,s2);
    fun4(s1,s2);

}
