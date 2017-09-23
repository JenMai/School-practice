/* Ex.6: Displays a saving account according to
 * deposit, rate and years since deposit.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float d, i, total;
	int y;

	printf("Type in your deposit: ");
	scanf("%f", &d);
	printf("Type in your saving account's interest rate: ");
	scanf("%f", &i);
	printf("Type in years since deposit: ");
	scanf("%d", &y);

	total = d * (i / 100) * y;
	d += total;

	printf("You saved: %.2f$ \n", total);
	printf("Total: %.2f$ \n", d);

	return 0;
}