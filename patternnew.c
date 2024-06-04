#include<stdio.h>
#include<string.h>
void new(char x[100][100],int y[100],int n,int z[100]);
void update(char x[100][100],int y[100],int n,int z[100]);
void display(char x[100][100],int y[100],int n,int z[100]);
void print(char x[100][100],int y[100],int n,int z[100]);
void value(char x[100][100],int y[100],int n,int z[100]);
int main(){
    int quantity[100];
    char name[100][100];
    int price[100];
    int *ptr;
    int n;
    printf("enter the number of product");
    scanf("%d",&n);
    int *ptr2;
    
    for(int i=0;i<n;i++){
        printf("enter the product %d name",i);
        scanf("%s",&name[i]);
        printf("enter the product %d quantity",i);
        scanf("%d",&quantity[i]);
        printf("enter the product %d price",i);
        scanf("%d",&price[i]);
        }

        printf("the following operations are possible\n");
        printf("ADD A NEW PRODUCT PRESS 1\n");
        printf("UPDATE THE QUANTITY OF PRODUCT PRESS 2\n");
        printf("DISPLAY DETAILS OF ALL PRODUCT PRESS 3\n");
        printf("DISPLAY DETAILS OF GIVEN PRODUCT PRESS 4\n");
        printf(" DISPLAY THE VALUE OF INVENTORY PRESS 5\n");
        int p;
        printf("Enter your choice");
        scanf("%d",&p);
        if(p==1){
            new(name,quantity,n,price);
        }
        else if(p==2){
            update(name,quantity,n,price);
        }
        else if(p==3){
            display(name,quantity,n,price);
        }
        else if(p==4){
            print(name,quantity,n,price);
        }
        else if(p==5){
            value(name,quantity,n,price);
        }
        else{
            printf("kindly enter correct number");
        }

    
}
void new(char x[100][100],int y[100],int n,int z[100]){
    int e;
    printf("enter the number of new product to be added");
    scanf("%d",&e);
    for(int i=n;i<n+e;i++){
        printf("enter the product %d name",i);
        scanf("%s",&x[i]);
        printf("enter the product %d quantity",i);
        scanf("%d",&y[i]);
        printf("enter the product %d price",i);
        scanf("%d",&z[i]);
        
    }   
    for(int i=0;i<n+e;i++){
        printf("name of product-%c",x[i]);
        printf("quantity-%d",y[i]);
        printf("price=%d",z[i]);
        printf("\n");
    }
}
void update(char x[100][100],int y[100],int n,int z[100]){
    char e[100];
    int pos=0;
    printf("enter the name of product whose quantity is to be changed");
    scanf("%s",e);
    for(int i=0;i<n;i++){
        if(strcmp(e,x[i])==0){
            pos=1;
            break;
        }
    }
    int v;
    printf("Enter the new price");
    scanf("%d",&v);
    y[pos]=v;
    for(int i=0;i<n;i++){
        printf("name of product-%s",x[i]);
        printf("quantity-%d",y[i]);
        printf("price=%d",z[i]);
        printf("\n");
    }
}
void display(char x[100][100],int y[100],int n,int z[100]){
    for(int i=0;i<n;i++){
        printf("name of product-%s",x[i]);
        printf("quantity-%d",y[i]);
        printf("price=%d",z[i]);
        printf("\n");
    }
}
void print(char x[100][100],int y[100],int n,int z[100]){
    char e[100];
    int pos=0;
    printf("enter the name of product whose details is to be princed");
    scanf("%s",e);
    for(int i=0;i<n;i++){
        if(strcmp(e,x[i])==0){
           printf("name of product-%s",x[i]);
           printf("quantity-%d",y[i]);
           printf("price=%d",z[i]);
           printf("\n");
            break;
        }
    }
}
void value(char x[100][100],int y[100],int n,int z[100]){
    printf("the total value of each products are");
    for(int i=0;i<n;i++){
           printf("name of product-%s",x[i]);
           printf("value-%d",y[i]*z[i]);
           printf("\n");  
        }
    
}
