#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int temp1;
    int temp2;
    if(a<=13){
        temp1=1;
        temp2=a;
    }
    else if(a>13 && a<=26){
        temp1=2;
        temp2=a-13;
    }
    else if(a>26 && a<=39){
        temp1=3;
        temp2=a-26;
    }
    else {
        temp1=4;
        temp2=a-39;
    }
    if(temp2==1){
        printf("Ace of ");
    }
    else if(temp2==11){
        printf("Jack of ");
    }
    else if(temp2==12){
        printf("Queen of ");
    }
    else if(temp2==13){
        printf("King of ");
    }
    else {
        printf("%d of ",temp2);
    }
    if(temp1==1){
        printf("Spades");
    }
    else if(temp1==2){
        printf("Hearts");
    }
    else if(temp1==3){
        printf("Diamonds");
    }
    else if(temp1==4){
        printf("Clubs");
    }
}