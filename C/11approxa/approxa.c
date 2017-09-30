/*
 * Gets the approximation of the square root, 
 * cube root and n root of a.
 * Usage: ./approxa a
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float sqrta(float a);
float cbrta(float a);
float nrta(float a, float n);


int main(int argc, char *argv[])
{
	int a, n;

	a = atoi(argv[1]);
	n = atoi(argv[2]);

	if (n == 0)
	{
		printf("0 is not a valid input.\n");
		return 1;
	}

	printf("approx. sqrt(a) = %f\n", sqrta(a));
	printf("approx. cbrt(a) = %f\n", cbrta(a));
	printf("approx. nrt(a) = %f\n", nrta(a, n));

	return 0;
}

/*
 * Gets the approx. of the square root of a.
 */
float sqrta(float a)
{
	float xn;
	float xn1;

	xn1 = (1.00 + a) / 2;

	do
	{
		xn = xn1;                                  /* store previous result */
		xn1 = (1.00 / 2)*(xn + (a / xn));

	} while (fabs(xn1 - xn) > 0.0001);             /* level of precision */

	return xn1;
}

/*
 * Gets the approx. of the cube root of a.
 */
float cbrta(float a)
{
	float xn;
	float xn1;

	xn1 = 1;

	do
	{
		xn = xn1;                                  /* store previous result */
		xn1 = xn + (1.00/3)*(a/pow(xn,2)-xn);

	} while (fabs(xn1 - xn) > 0.0001);             /* level of precision */

	return xn1;
}

/*
 * Gets the approx. of the n root of a.
 */
float nrta(float a, float n)
{
	float xk;
	float xk1;

	xk1 = a / n;

	do
	{
		xk = xk1;                                  /* store previous result */
		xk1 = (pow(xk, n)*(n - 1) + a) / (n*pow(xk, n - 1));

	} while (fabs(xk1 - xk) > 0.0001);             /* level of precision */

	return xk1;
}
