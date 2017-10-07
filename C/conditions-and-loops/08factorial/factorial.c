/* Ex.8: Calculates factorial of n and combination.
 * (using argv wasn't specified)
 */
#include <stdio.h>
#include <stdlib.h>

int fact(int n);
int comb(int n, int p);

int main(int argc, char *argv[])
{
	unsigned int n, p, f, c;

	if (argc != 3)
	{
		printf("Usage: ./factorial n p");
		return 1;
	}
	
	n = atoi(argv[1]);
	p = atoi(argv[2]);

	f = fact(n);
	c = comb(n, p);

	printf("%d! = %d\n", n, f);
	printf("%d choose %d = %d\n", n, p, c);

	return 0;
}

/* 
 * Calculates factorial of n
 */
int fact(int n)
{
	int cnt;
	for (cnt = n - 1; cnt > 0; cnt--)
	{
		n *= cnt;
	}
	return n;
}

/*
 * Calculates combinations
 */
int comb(int n, int p)
{
	unsigned int c;
	c = fact(n) / (fact(n - p) * fact(p));
	return c;
}