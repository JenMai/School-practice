/*
 * Reverses a string (using one char* parameter only).
 * Usage: ./reverse "your string"
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* reverse(char *str);

int main(int argc, char *argv[])
{
	printf("Your input: %s\n", argv[1]);
	printf("Reversed: %s\n", reverse(argv[1]));

	return 0;
}

/*
 * Reverses a string.
 */
char* reverse(char *str)
{
	int r, l, len;                           /* right and left loop variables */
	char hold;

	len = strlen(str)-1;

	for (r = 0, l = len; r != l; r++, l--)
	{
		hold = str[r];                       /* switch chars using a variable */
		str[r] = str[l];
		str[l] = hold;
	}

	return str;
}