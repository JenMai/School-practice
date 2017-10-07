/*
 * Concatenates a string into another.
 * Usage: ./concat "first string" "second string"
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 /*
  * TODO: use header file for copy from copy.c
  * (could also use strdup())
  */
char* concat(char *s1, char *s2);
char* copy(char *s1);

int main(int argc, char *argv[])
{
	char* concatd;
	char* input1;

	input1 = copy(argv[1]);                                 /* reassigning a pointer away from argv,
	                                                           as argv[]s can't be realloc() */
	printf("String 1: %s\n", input1);
	printf("String 2: %s\n", argv[2]);

	concatd = concat(input1, argv[2]);

	printf("%s\n", concatd);

	free(concatd);                                          /* input1 already freed() by realloc()? */

	return 0;
}

/*
 * Concatenates the second string into the first.
 */
char* concat(char *s1, char *s2)
{
	int i, j, lenS1, lenS2;
	lenS1 = strlen(s1);
	lenS2 = strlen(s2);

	s1 = (char*)realloc(s1, sizeof(char)*(lenS2+lenS1+2)); /* dynamically alloc according to strings
								  +2 for space char and \0 */
	s1[lenS1] = ' ';                                       /* space between concatenation
	                                                         (thus lenS1+1 within for loop) */
	for (i = lenS1+1, j = 0; j <= lenS2-1; i++, j++)
	{
		s1[i] = s2[j];
	}
    
	return s1;
}

/*
 * Copies first string into second.
 */
char* copy(char *s1)
{
	int lenS1, i;
	char *s2;

	lenS1 = strlen(s1);
	s2 = (char*)malloc(sizeof(char) * (lenS1 + 1));       /* dynamically allocate size of s2 */

	for (i = 0; s1[i] != '\0'; i++)                       /* copy into s2 */
	{
		s2[i] = s1[i];
	}

	return s2;
}
