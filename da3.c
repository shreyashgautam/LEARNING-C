#include<stdio.h>
int main(){
    int brand[100];
    int stock[100];
    int sold[100];
    int i=0;
    for(i=0;i<4;i++){
        char x[100];
        fgets(x,100,stdin);
        sscanf(x,"%d %d %d",&brand[i],&stock[i],&sold[i]);
    }
    int stockn=0;
    for(int j=0;j<i;j++){
        stockn=stockn+stock[j];
    }
    int soldn=0;
    for(int j=0;j<i;j++){
        soldn=soldn+sold[j];
    }
    int left=stockn-soldn;
    float sales;
    sales=(soldn*100)/stockn;
    printf("inventory at day's start: %d\n",stockn);
    printf("total sales : %d\n",soldn);
    printf("inventory at day's end: %d\n",left);
    printf("sales as percentage of investory : %f\n",sales);
}
