#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct employee{
    char name[100];
    int id;
    int sal;
}employee;
typedef struct manager{
    employee e;
    char des[100];
    int num;
}manager;
int main(){
    int x;
    scanf("%d",&x);
    if(x==1){
        manager * m=(manager*)malloc(1*sizeof(manager));
        input all; and then print
    }
    else{
        employee * e=(employee*)malloc(1*sizeof(employee));
        input all and then print;
    }
}
