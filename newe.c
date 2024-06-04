#include<stdio.h>
#include<string.h>
int main(){
int c=-1;
char a[100];
fgets(a,100,stdin);
for(int i=0;a[i]!='\0';i++){
c++;
}
for(int i=0;i<c;i++){
if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'){
for(int j=0;j<c;j++){
if(a[i+1]=='a'||a[i+1]=='e'||a[i+1]=='i'||a[i+1]=='o'||a[i+1]=='u'||a[i+1]=='A'||a[i+1]=='E'||a[i+1]=='I'||a[i+1]=='O'||a[i+1]=='U'){
i++;
}
}
if(a[i+1]>='A' && a[i+1]<='Z'){
a[i+1]+=32;
}
else if(a[i+1]>='a' && a[i+1]<='z'){
a[i+1]-=32;
}
}
}
puts(a);
}
