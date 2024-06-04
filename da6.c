// C program to print all primes smaller than or equal to
// n using Sieve of Eratosthenes
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void SieveOfEratosthenes(int n)
{

	// Create a boolean array "prime[0..n]" and initialize
	// all entries it as true. A value in prime[i] will
	// finally be false if i is Not a prime, else true.
	int prime[n + 1];
	memset(prime, 1, sizeof(prime));

	for (int p = 2; p * p <= n; p++) {
		
		if (prime[p] == 1) {
			for (int i = p * p; i <= n; i += p)
				prime[i] = 0;
		}
	}

	// Print all prime numbers
	for (int p = 2; p <= n; p++)
		if (prime[p]==1)
			printf("%d ",p);
}


int main()
{
	int n ;
    scanf("%d",&n);
	printf("Following are the prime numbers smaller than or equal to %d \n", n);
	SieveOfEratosthenes(n);
	return 0;
}


