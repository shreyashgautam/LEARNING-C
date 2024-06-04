#include<stdio.h>
typedef struct emp{
    int id;
    char name[50];
    float salary;
}emp;
int main(){
    emp e1;
    emp * ptr=&e1;
    scanf("%d",&ptr->id);
    scanf("%s",ptr->name);
    scanf("%f",&ptr->salary);

    printf("%d\t",ptr->id);
    printf("%s\t",ptr->name);
    printf("%f\n",ptr->salary);
    printf("printing using . operator\n");
    printf("%d\t",e1.id);
    printf("%s\t",e1.name);
    printf("%f\n",e1.salary);
    

}