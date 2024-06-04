#include<stdio.h>
//to count the consonent we can just count count 2 or we can subtract count from len of the function
void vowel(char name[]);
int main(){
    char name[50];
    fgets(name,50,stdin);
    vowel(name);
    return 0;
}
void vowel(char name[]){
    int count=0;
    int count2=0;
    for(int i=0;name[i]!='\0';i=i+1){
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'){
            count=count+1;
        }
        else{
            count2=count2+1;
        }
    }
    printf("%d",count);
}