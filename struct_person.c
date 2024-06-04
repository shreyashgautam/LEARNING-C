#include<stdio.h>
typedef struct student{
    char name[100];
    char branch[100];
    int marks;
}student;
int main(){
    int n=10;
    student s[n];
    for(int i=0;i<10;i++){
        scanf("%s",s[i].name);
        scanf("%s",s[i].branch);
        scanf("%d",&s[i].marks);
    }
    printf("\n");
    for(int i=0;i<10;i++){
        printf("NAME OF STUDENT %d  IS : %s\n",i+1,s[i].name);
        printf("BRANCH OF THE STUDENT  %d  IS : %s\n",i+1,s[i].branch);
        printf("MARKS OF THE STUDENT  %d IS : %d\n",i+1,s[i].marks);
    }
}