#include<stdio.h>
//gross=hra+da+bonus+sal-pf
//hra=0.10*sal  da=0.20*sal   pf=0.05 * sal  if sales(10 to 20 ) bonus =1000 (20+) bonus=2000
typedef struct emp{
    int id;
    char name[100];
    int sal;
    int sales;
}emp;
//hra=0.10*sal  da=0.20*sal   pf=0.05 * sal 
void extra(emp e[100],int n){
    int bonus[100];
    for(int i=0;i<n;i++){
        if(e[i].sales>10 && e[i].sales<20){
            bonus[i]=1000;
        }
        else if(e[i].sales>20){
            bonus[i]=2000;
        }
        else{
            bonus[i]=0;
        }
    }
    float hra[100];
    float da[100];
    float pf[100];
    float gross[100];
    for(int i=0;i<n;i++){
        hra[i]=0.1*e[i].sal;
        da[i]=0.2*e[i].sal;
        pf[i]=0.05*e[i].sal;
        gross[i]=hra[i]+da[i]+bonus[i]+e[i].sal-pf[i];
    }
    for(int i=0;i<n;i++){
        printf("%d",e[i].id);
        printf("%s",e[i].name);
        printf("%d",e[i].sal);
        printf("%d",e[i].sales);
        printf("%f",gross[i]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    emp e[100];
    for(int i=0;i<n;i++){
        scanf("%d",&e[i].id);
        scanf("%s",e[i].name);
        scanf("%d",&e[i].sal);
        scanf("%d",&e[i].sales);
    }
    extra(e,n);
}