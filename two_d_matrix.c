#include<Stdio.h>
#include<string.h>
int cube(int x);
int cuboid(int b,int c,int d);
float sphere(int r);
float cylinder(int w,int e);
float cone(int q,int h);
int main(){
    int a;
    int x;
    int b;
    int c;
    int d;
    int e;
    int r;
    int w;
    int q;
    int h;
    printf("1. VOLUME OF CUBE\n");
    printf("2. Volume of Cuboid\n");
    printf("3. Volume of sphere\n");
    printf("4. Volume of cylinder\n");
    printf("5. Volume of cone\n");
    printf("Enter your choice");
    scanf("%d",&a);
    if(a==1){
        printf("Enter the length of edge");
        
        scanf("%d",&x);
        printf("%d",cube(x));
    }
    else if(a==2){
        printf("enter the length");
        scanf("%d",&b);
        printf("enter the breadth");
        scanf("%d",&c);
        printf("enter the height");
        scanf("%d",&d);
        printf("%d",cuboid(b,c,d));
    }
    else if(a==3){
        printf("enter the radius of sphere");
        scanf("%d",&r);
        printf("%f",sphere(r));
    }
    else if(a==4){
        printf("enter the radius of cylinder");
        scanf("%d",&w);
        printf("enter the hieght of cylinder");
        scanf("%d",&e);
        printf("%f",cylinder(w,e));
    }
    else if(a==5){
        printf("enter the radius of cone");
        
        scanf("%d",&q);
        printf("enter the hieght of cone");
        scanf("%d",&h);
        printf("%f",cone(q,h));
    }
    char o[100];
    printf("\nenter yes/no\n");
    scanf("%s",o);
    char m[100]="yes";
    if(strcmp(o,m)==0){
    printf("1. VOLUME OF CUBE\n");
    printf("2. Volume of Cuboid\n");
    printf("3. Volume of sphere\n");
    printf("4. Volume of cylinder\n");
    printf("5. Volume of cone\n");
    printf("\n");
    printf("Enter your choice");
    int u;
    scanf("%d",&u);
    if(u==1){
        printf("Enter the length of edge");
        
        scanf("%d",&x);
        printf("%d",cube(x));
    }
    else if(u==2){
        printf("enter the length");
        scanf("%d",&b);
        printf("enter the breadth");
        scanf("%d",&c);
        printf("enter the height");
        scanf("%d",&d);
        printf("%d",cuboid(b,c,d));
    }
    else if(u==3){
        printf("enter the radius of sphere");
        scanf("%d",&r);
        printf("%f",sphere(r));
    }
    else if(u==4){
        printf("enter the radius of cylinder");
        scanf("%d",&w);
        printf("enter the hieght of cylinder");
        scanf("%d",&e);
        printf("%f",cylinder(w,e));
    }
    else if(u==5){
        printf("enter the radius of cone");
        
        scanf("%d",&q);
        printf("enter the hieght of cone");
        scanf("%d",&h);
        printf("%f",cone(q,h));
    }
    }
    
}

int cube(int x){
    return x*x*x;
}
int cuboid(int b,int c,int d){
    return b*c*d;
}
float sphere(int r){
    return 4*3.14*r*r;
}
float cylinder(int w,int e){
    return 3.14*w*w*e;
}
float cone(int q,int h){
    return 0.3*3.14*q*q*h;
}