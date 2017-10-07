/*
 * Checks whether two strings are identical,
 * return 1 if they are, 0 otherwise.
 * Usage: ./ident "your first string" "your second string
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check_identical(char *s1, char *s2);

int main(int argc, char *argv[])
{
	int result;

	result = check_identical(argv[1], argv[2]);

	if (result == 0)
		printf("The two strings are different.\n");
	else
		printf("The two strings are identical.\n");

	return 0;
}

/*
 * Checks whether two strings are identical.
 */
int check_identical(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s2[i] != s1[i])
			return 0;
	}

	return 1;
}