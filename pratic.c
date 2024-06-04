#include<stdio.h>
typedef struct date{
    int dat;
    int month;
    int year;
}date;
typedef struct student{
    date d;
    char name[100];
}student;
void printdata(struct student s[100],int n){
    for(int i=0;i<n;i++){
        printf("%s",s[i].name);
        printf("%d",s[i].d.dat);
        printf("%d",s[i].d.month);
        printf("%d\n",s[i].d.year);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    student s[n];
    for(int i=0;i<n;i++){
        scanf("%s",s[i].name);
        scanf("%d",&s[i].d.dat);
        scanf("%d",&s[i].d.month);
        scanf("%d",&s[i].d.year);
    }
    printdata(s,n);
}