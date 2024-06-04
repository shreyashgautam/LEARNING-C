#include<stdio.h>
#include<string.h>
typedef struct emp{
    int id;
    int sal;
    char name[100];
}emp;
typedef struct special{
    emp e;
    char des[100];
    int inte;
}special;
int main(){
    int n;
    scanf("%d",&n);
    emp e1[n];
    special s[100];
    int j=0;
    for(int i=0;i<n;i++){
        scanf("%d",&e1[i].id);
        scanf("%s",&e1[i].name);
        scanf("%d",&e1[i].sal);
        if(e1[i].sal>10000){
            s[j].e.id=e1[i].id;
            scanf("%s",s[j].des);
            strcpy(s[j].e.name,e1[i].name);
            scanf("%d",&s[j].inte);
            s[j].e.sal=e1[i].sal+s[j].inte;
            j++;
        }
    }
}