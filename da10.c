#include <stdio.h>
int main()
{
	int n ;
    scanf("%d",&n);
	printf("\n OUTPUT IS \n");
	int x[n + 1];
    for(int i=0;i<n+1;i++){
        x[i]=1;
    }
	for (int i = 2; i * i <= n; i++) {
		
		if (x[i] == 1) {
			
			for (int j =i * i; j <= n; j += i)
				x[j] = 0;
		}
	};

	
	for (int p = 2; p <= n; p++)
		if (x[p]==1)
			printf("%d ",p);
	return 0;
}
