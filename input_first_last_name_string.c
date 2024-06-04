#include<stdio.h>
int main(){
    char firstname[5];
    for(int i =0;i<5;i=i+1){
        printf("%d",i);
        scanf("%s",&firstname[i]);
    }
    printf("enter your last name");
    printf("\n");
    char lastname[5];
    for(int i =0;i<5;i=i+1){
        printf("%d",i);
        scanf("%s",&lastname[i]);
    }
    for(int i=0;i<5;i=i+1){
        if(firstname[i]=='\0'){
            break;
        }
        else{
             printf("%c",firstname[i]);
        }
        
    }
   for(int i=0;i<5;i=i+1){
        if(lastname[i]=='\0'){
            break;
        }
        else{
             printf("%c",lastname[i]);
        }
        
    }
    return 0;
}
