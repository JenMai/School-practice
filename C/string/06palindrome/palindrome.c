/*
 * Checks whether a string is a palindrome,
 * returns 1 if it is one, otherwise 0.
 * Usage: ./palindrome "your str"
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int palindrome(char *str);
char* str_toupper(char *str);

int main(int argc, char *argv[])
{
	argv[1] = str_toupper(argv[1]);                              /* case-proof */

	if (palindrome(argv[1]) == 0)
		printf("Your input is not a palindrome.\n");
	else
		printf("Your input is a palindrome.\n");

	return 0;
}

/*
 * Checks whether a string is a palindrome
 */
int palindrome(char *str)
{
	int i, j;

	for (i = 0, j = strlen(str) - 1; str[i] != '\0'; i++, j--) /* strlen()-1 for array */
	{                                                          /* Check string by putting i "on the left" */
		if (str[i] != str[j])                                  /* and j to the opposite side */
		{
			return 0;
		}
	}

	return 1;
}

/*
 * Converts lowercases to uppercases.
 */
char* str_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))                /* if already an uppercase, don't call toupper()*/
			continue;

		str[i] = toupper(str[i]);
	}

	return str;
}