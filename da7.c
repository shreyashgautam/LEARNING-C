#include <stdio.h>
#include <string.h>
 

int main()
{
    char a[100];
    char b[100];
    scanf("%s",a);
    scanf("%s",b);
    int M = strlen(a);
    int N = strlen(b);
    int x=-1;
    for (int i = 0; i <= N - M; i++) {
        int j;
        for (j = 0; j < M; j++)
            if (b[i + j] != a[j])
                break;
        if (j == M)
            x=i;
    }
    
    printf("%d",x);
}
