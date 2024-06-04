#include<stdio.h>
#include<stdlib.h>
typedef struct student{
    int roll;
    int marks;
    char name[100];
    int subject;
}student;
void calc(struct student *s,int n){
    int total[100];
    for(int i=0;i<n;i++){
        total[i]=s[i].subject*s[i].marks;
        if(s[i].marks>100){
            s[i].marks=100;
        }
    }
    float avg=0;
    for(int i=0;i<n;i++){
        avg=avg+total[i];
    }
    avg=avg/n;
    printf("%f",avg);
}
int main(){
    int n;
    scanf("%d",&n);
    
    struct student *x= (struct student *)malloc(n*sizeof(struct student));
    for(int i=0;i<n;++i){
        scanf("%d",&(x+i)->roll);
        scanf("%d",&(x+i)->marks);
        scanf("%d",&(x+i)->subject);
        scanf("%s",&(x+i)->name);
    }
    calc(x,n);
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d\n",(x+i)->roll);
        printf("%d\n",(x+i)->marks);
        printf("%d\n",(x+i)->subject);
        printf("%s\n",(x+i)->name);
    }
    
    }