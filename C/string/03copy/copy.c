/*
 * Copies a string into another.
 * Usage: ./copy "your string"
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* copy(char *s1);

int main(int argc, char *argv[])
{
	char *cpy;

	printf("%s\n", argv[1]);

	cpy = copy(argv[1]);

	printf("Copied: %s\n",cp);

	free(cpy);                                       /* free malloc() from copy() (not that useful,
                                                     but better get the habit!) */
	return 0;
}

/*
 * Copies first string (s1) into second (s2).
 */
char* copy(char *s1)
{
	int lenS1, i;
	char *s2;

	lenS1 = strlen(s1);
	s2 = (char*)malloc(sizeof(char) * (lenS1+1));   /* dynamically allocate size of s2 */

	for (i = 0; s1[i] != '\0'; i++)                 /* copy into s2 */
	{
		s2[i] = s1[i];
	}

	return s2;
}