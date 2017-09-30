/*
 * Gets the closest f(x) to 0.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float function(float x);
float dichotomy(float a, float b);


int main()
{
	float a, b, result;

	a = 0;
	b = 1;
	
	result = dichotomy(a, b);

	printf("x(0) = %f\n", result);

	return 0;
}

/*
 * Algorithm to get to x(0) root from f(x)
 */
float dichotomy(float a, float b)
{
	float mid;
	do
	{
		mid = (a + b) / 2;
		if ((function(a) * function(mid)) > 0) /*if both a and mid return the same sign*/
			a = mid;

		else
			b = mid;

	} while (b - a > 0.0001);                 /*level of precision*/

	return mid;
}

/*
 *Function to try.
 */

float function(float x)
{
	return x - 1 / (2 + pow(x, 2));
}
