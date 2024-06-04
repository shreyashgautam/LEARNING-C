#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    double d;
    d=b*b-4*a*c;
    double dis;
    double root1,root2;
    if(d==0){
        printf("equal roots");
        dis=sqrt(d);
        root1=-b/(2*a); 
        printf("%lf",root1);  
    }
    else if(d>0){
        dis=sqrt(d);
        root1=(-b+dis)/2*a;
        root2=(-b-dis)/2*a;
        printf("%lf %lf",root1,root2);
    }
    
    else{
        double real,img;
        dis=sqrt(-d);
        real=-b/(2*a);
        img=dis/(2*a);
        printf("%lf %lf",real,img);
    }
}