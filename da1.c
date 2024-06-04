#include<Stdio.h>
#include<string.h>
int main(){
    int pizza[100];
    char size[100][100];
    int number[100];
    int i=0;
    for(i=0;;i++){
        int n;
        printf("Input pizza type: ");
        scanf("%d",&n);
        if(n==-1){
            break;
        }
        else{
            pizza[i]=n;
        }
        printf("Input the pizza: ");
        scanf("%s",&size[i]);
        printf("Input the number of pizza: ");
        scanf("%d",&number[i]);
    }
    char L[100]="L";
    char M[100]="M";
    float total=0;
    for(int j=0;j<i;j++){
        if(pizza[j]==1){
            if(strcmp(size[j],L)==0){
                total=total+(float)number[j]*1720;
            }
            if(strcmp(size[j],M)==0){
                total=total+(float)number[j]*975;
            }
            
        }
        else if(pizza[j]==2){
            if(strcmp(size[j],L)==0){
                total=total+(float)number[j]*1820;
            }
            if(strcmp(size[j],M)==0){
                total=total+(float)number[j]*1000;
            }
        }
        
        
    }
    float discount=0;
    
    char YES[100]="Y";
    printf("\nAre you paying by credit card (Y/N) ? ");
    char x[100];
    scanf("%s",&x);
    printf("Are you a loyalty customer (Y/N)? ");
    char y[100];
    scanf("%s",&y);
    printf("Is this an online order (Y/N) ?");
    char z[100];
    scanf("%s",&z);
    if(strcmp(x,YES)==0){
        discount=20;
    }
    else if(strcmp(y,YES)==0){
        discount=15;
    }
    else if(strcmp(z,YES)==0){
        discount=5;
    }
    else{
        discount=0;
    }
    printf("YOUR BILL:\n");
    printf("-------------------------------------\n");
    printf("total is : %0.2f\n",total);
    float totald;
    totald=(discount*total)/100;
    printf("Discount : %0.2f\n",totald);
    float net;
    net=total-totald;
    printf("Net amount : %0.2f\n",net);
}
