/* Ex.4 : A simple calculator 
 * Whether it should take in integers or float wasn't specified,
 * but I made it handle decimal results from divisions.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b;
    char op;

	/* 
	 * User inputs
	 */
    printf("Type in first operand: ");
    scanf("%d", &a);
    printf("Type in second operand: ");
    scanf(" %d", &b);
    printf("Type in operator: ");
    scanf(" %c", &op);

	/*
	 * Operations
	 */

    switch (op)
    {
        case '+':
		{
			printf("%d + %d = %d\n", a, b, a + b);
			break;
		}
        case '-':
		{
            printf("%d - %d = %d\n",a, b, a - b);
			break;
	    }
        case '*':
		{
            printf("%d * %d = %d\n",a, b, a * b);
			break;
	    }
        case '/':
		{
			if (a % b == 0)
				printf("%d / %d = %d\n", a, b, a / b);
			else if (b == 0)
				printf("Can't divide by 0!\n");
			else
				printf("%d / %d = %.2f\n", a, b, (float)a / b);
	    }
    }
    return 0;
}
