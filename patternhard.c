#include<stdio.h>
double cal_amount(int type,double initial);
void details(int type,double initial,double b);
int eligible(double b);
int main(){
    int type;
    double initial;
    scanf("%d",&type);
    if(type>3){
        printf("invalid");
    }
    else{
        scanf("%lf",&initial);
    double b;
    b=cal_amount(type,initial);
    // printf("%lf",b);
    details( type, initial, b);
    
    int x;
    x=eligible(b);
    if(x==1){
        printf("ELIGIBLE:yes");
    }
    else{
        printf("ELIGIBLE:no");
    }
    }
    


}
double cal_amount(int type,double initial){
    double interest;
    float bal;
    if(type==1){
        
        interest = (initial*4)/100;
        bal=initial+interest;
        return bal;
    }
    
    else if(type==2){
        interest= (initial*7)/100;
        bal=initial+interest;
        return bal;
    }
    else if(type==3){
        interest= (initial*10)/100;
        bal=initial+interest;
        return bal;
    }
    else{
        return 0;
    }
    return 0;
}
void details(int type,double initial,double b){
    printf("TYPE : %d\n",type);
    printf("initial bal : %0.2lf\n",initial);
    printf("final bal: %0.2lf\n",b);
}
int eligible(double b){
    if(b>=5000){
        return 1;
    }
    else{
        return 2;
    }
}