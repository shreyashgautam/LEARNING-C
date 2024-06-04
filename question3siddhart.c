#include<stdio.h>
typedef struct emp{
    int id;
    float salary;
    char name[100];
}emp;
typedef struct emp2{
    emp e;
    char org[100];
}emp2;
int main(){
    emp2 e2;
    scanf("%d",&e2.e.id);
    scanf("%f",&e2.e.salary);
    scanf("%s",&e2.e.name);
    scanf("%s",&e2.org);
    printf("details are :\n");
    printf("%d\t",e2.e.id);
    printf("%f\t",e2.e.salary);
    printf("%s\t",e2.e.name);
    printf("%s\n",e2.org);
}