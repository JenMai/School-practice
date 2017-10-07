/*
 * Converts a number as a string to an integer data type.
 * Usage: ./toint "1234"
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int toint(char *str);

int main(int argc, char *argv[])
{
	printf("String: %s\n", argv[1]);

	printf("To integer: %d\n", toint(argv[1]));
}

/*
* Converts string to integer.
*/
int toint(char *str)
{
	int i, n, lenStr, place;
	n = 0;
	place = 1;

	lenStr = strlen(str)-1;              /* set countdown */

	for (i = lenStr; i >= 0; i--)
	{
		str[i] -= 48;                    /*ASCII code for 0 to 9 is 48 to 57 */
		printf("str: %d\n", str[i]);
		n += str[i] * place;             /* each digits is added in the right place (1, 10, 100th place)  */
		printf("n  = %d\n", n);
		place *= 10;                     /* prepare place value for next digit */

	}

	return n;
}