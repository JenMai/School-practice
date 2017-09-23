/* Ex.5: Sums the n positive integers.
 * (using argv wasn't specified)
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int n, i, total = 0;
	n = atoi(argv[1]);

	for (i = 1; i <= n; i++)
	{
		total += i;
	}

	printf("Sum of the first %d integers is: %d \n", n, total);

	return 0;
}