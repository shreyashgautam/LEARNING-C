#include<Stdio.h>
typedef struct student{
    int marks;
    float cgpa;
    char name[100];
}student;
int main(){
    int n;
    scanf("%d",&n);
    student s1[n];
    for(int i=0;i<n;i++){
        scanf("%s",&s1[i].name);
        scanf("%d",&s1[i].marks);
        scanf("%f",&s1[i].cgpa);
        
    }
    for(int i=0;i<n;i++){
        printf("the name is %s scored %d marks and %f is his cgpa",s1[i].name,s1[i].marks,s1[i].cgpa);
        printf("\n");
    }
}