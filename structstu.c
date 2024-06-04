#include<stdio.h>
typedef struct student{
    int age;
    char name[100];
    int marks;
}student;
int main(){
    student s[2];
    for(int i=0;i<2;i++){
        scanf("%s",&s[i].name);
        scanf("%d",&s[i].age);
        scanf("%d",&s[i].marks);
    }
    printf("\n");
    for(int i=0;i<2;i++){
        printf("name of the student is %s\n",s[i].name);
        printf("age is %d\n",s[i].age);
        printf("marks is %d\n",s[i].marks);
    }
    int total=0;
    for(int i=0;i<2;i++){
        total+=s[i].marks;
    }
    printf("%d",total/2);
}