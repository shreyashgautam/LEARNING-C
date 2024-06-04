#include<stdio.h>
typedef struct grocery{
    int pn;
    float price;
    char name[100];
    int units;
}grocery;
void print(grocery g[],int n){
    float total=0;
    float discount;
    float net;
    
    for(int i=0;i<n;i++){
        total=total+g[i].units*g[i].price;
    }
    if(1000<total && total<2000){
        discount=0.1*total;
        net=total-(0.1*total);
    }
    else if(total>2000){
        discount=0.2*total;
        net=total-(0.2*total);
        
    }
    else{
        discount=0;
        net=total;
    }
   
    printf("%f\n",total);
    printf("%f\n",discount);
}
int main(){
    int n;
    scanf("%d",&n);
    grocery g[n];
    for(int i=0;i<n;i++){
        scanf("%d",&g[i].pn);
        scanf("%f",&g[i].price);
        scanf("%s",g[i].name);
        scanf("%d",&g[i].units);
    }
    for(int i=0;i<n;i++){
        printf("%d ",g[i].pn);
        printf("%f ",g[i].price);
        printf("%s ",g[i].name);
        printf("%d\n",g[i].units);
    }
    print(g,n);

}