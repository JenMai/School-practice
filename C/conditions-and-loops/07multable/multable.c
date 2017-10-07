/* Ex.7: Multiplication table, according to n.
 * (using argv wasn't specified)
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	unsigned int a, b;

	a = atoi(argv[1]);

	for (b = 1; b <= a; b++)
	{
		printf("%-2d * %-3d = %d\n", a, b, a * b);
	}

	return 0;
}