/*
 * Gives the approximation of pi according to input:
 * pi^4/90 = 1/1^4+....1/n^4
 * Usage: ./approxpi n
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float approxpi(int n);

int main(int argc, char *argv[])
{
	int n;
	float result;

	n = atoi(argv[1]);

	result = approxpi(n);

	printf("Approximation of pi: %f\n", result);

	return 0;
}

/*
 * Gives the approximation.
 */
float approxpi(int n)
{
	float appi = 0;
	int i;

	for (i = 1; i <= n; i++)
	{
		appi += 1 / pow(i, 4);
	}

	appi = sqrt(sqrt(90 * appi));

	return appi;
}