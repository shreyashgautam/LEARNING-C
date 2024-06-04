#include<stdio.h>
int main(){
int a[100][100];
int n;
int m;
printf("enter the prize of arr");
scanf("%d",&n);
scanf("%d",&m);
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
scanf("%d",&a[i][j]);
}
}
int b[100][100];
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
scanf("%d",&b[i][j]);
}
}
int c[100][100];
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
c[i][j]=a[i][j]+b[i][j];
}
}
int d[100][100];
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
d[i][j]=a[i][j]-b[i][j];
}
}
int e[100][100];
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
e[i][j]=0; 
for(int k=0;k<m;k++){
e[i][j]+=a[i][k]*b[k][j];
}
}
}
printf("\nsum of two matrix is \n");
for(int i=0;i<n;i++){
printf("\n");
for(int j=0;j<m;j++){
printf("%d\t",c[i][j]);
}
}
printf("\n differnce of two matrix is \n");
for(int i=0;i<n;i++){
printf("\n");
for(int j=0;j<m;j++){
printf("%d\t",d[i][j]);
}
}
printf("\n product of two matrix is \n");
for(int i=0;i<n;i++){
printf("\n");
for(int j=0;j<m;j++){
printf("%d\t",e[i][j]);
}
}
}