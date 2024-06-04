#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int year;
    year=a/365;
    int left_days;
    left_days=a%365;
    int week;
    week=left_days/30;
    int left_days_2;
    left_days_2=left_days%30;
    printf("years %d",year);
    printf("\nmonth %d",week);
    printf("\ndays %d",left_days_2);
}