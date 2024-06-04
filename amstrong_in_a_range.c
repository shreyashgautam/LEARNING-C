#include<stdio.h>
void amstrong(int a);
int main(){
    int a;
    scanf("%d",&a);
    amstrong(a);
    
}
void amstrong(int a){
    for(int i=1;i<=a;i++){
        int x=i;
    int y=i;
    int rem=0;
    int rev=0;
    int count =0;
    while(x>0){
        count++;
        x=x/10;
    }
    if(count ==1){
        printf("%d\t",i);
    }
    else if (count ==2){
        while(y>0){
            rem=y%10;
            rev=rev+rem*rem;
            y=y/10;
        }
        if(i==rev){
             printf("%d\t",i);
        }
        // else{
        //     //printf("not a amstrong number");
        // }
    }
    else if (count ==3){
        while(y>0){
            rem=y%10;
            rev=rev+rem*rem*rem;
            y=y/10;
        }
        if(i==rev){
             printf("%d\t",i);
        }
        // else{
        //     printf("not a amstrong number");
        // }
    }
    else if (count ==4){
        while(y>0){
            rem=y%10;
            rev=rev+rem*rem*rem*rem;
            y=y/10;
        }
        if(i==rev){
             printf("%d\t",i);
        }
        // else{
        //     printf("not a amstrong number");
        // }
    }
    else{
        printf("out of range");
    }
    }
    
}
