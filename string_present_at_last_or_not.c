#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    char b[100];
    fgets(a,100,stdin);
    fgets(b,100,stdin);
    int c;
    c=strlen(a);
    int d;
    d=strlen(b);
    if (d == c) // If the lengths are equal
    if (strcmp(a, b) == 0) // If the strings are equal
      printf("Present!\n");
    else
      printf("Not Present!\n");
  else if (c < d) // If the first string is shorter than the second
    printf("Not Present!\n");
  else if (strstr(&a[c - d - 1], b)) // If the second string is found in the last part of the first string
    printf("Present!\n");
  else
    printf("Not Present!\n");

}