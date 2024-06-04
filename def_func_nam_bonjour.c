#include<stdio.h>
void nam();
int main(){
    nam();
    return 0;
}
void nam(){
    char a;
    printf("enter i if indian or f if french");
    scanf("%s",&a);
    if (a=='i'){
        printf("namaaste");
    
    }
    else if (a=='f'){
        printf("bonjour");
    }
    else{
        printf("you do not belong to france or india");
    }
}