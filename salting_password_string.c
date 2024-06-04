#include<stdio.h>
//can be done using lib using concat and then puts.
int main(){
    char password[30];
    fgets(password,30,stdin);
    int count=-1;
    for(int j=0;password[j]!='\0';j=j+1){
        count=count+1;
    }
    char salt[]="123";
    password[count]=salt[0];
    password[count+1]=salt[1];
    password[count+2]=salt[2];
    puts(password);
    return 0;
    
}