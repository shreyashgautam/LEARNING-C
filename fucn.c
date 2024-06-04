#include<stdio.h>
float combination(int a,int b,int af,int bf,int cf,int cmb);
int main(){
    int a;
    printf("enter the number 1");
    scanf("%d",&a);
    int b;
    printf("enter the number 2");
    scanf("%d",&b);
    int af=1;
    int bf=1;
    int cf=1;
    float cmb;
    
    printf("%0.0f",combination(a,b,af,bf,cf,cmb));
}
float combination(int a,int b,int af,int bf,int cf,int cmb){
    for(int i=1;i<=a;i++){
        af=af*i;
    }
    for(int i=1;i<=b;i++){
        bf=bf*i;
    }
    for(int i=1;i<=(a-b);i++){
        cf=cf*i;
    }
    cmb=af/(bf*cf);
    return cmb;

}