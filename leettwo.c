#include<stdio.h>
int main(){
    int n1;
    printf("enter the size of 1st aaray");
    scanf("%d",&n1);
    
    int a[100];
    int b[100];
    for(int i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    int n2;
    printf("enter the size of 2nd aaray");
    scanf("%d",&n2);
    for(int i=0;i<n1;i++){
        scanf("%d",&b[i]);
    }
    int x=0;
    for(int i=n1-1;i>=0;i--){
        x=x*10+a[i];
    }
    int y=0;
    for(int i=n2-1;i>=0;i--){
        y=y*10+b[i];
    }
    printf("%d %d",x,y);
    int w=0;
    w=x+y;
    int c[100];
    int q=0;
    int rem=0;
    while(w>0){
        rem=w%10;
        c[q]=rem;
        q++;
        w=w/10;
    }
    printf("\n");
    for(int i=0;i<q;i++){
        printf("%d,",c[i]);
    }
    return 0;
}