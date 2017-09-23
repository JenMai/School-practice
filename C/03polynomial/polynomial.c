/* Ex.3 : Calculates a second degree polynomial,
 * then returns the results along with the number
 * of solutions.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c, d, xp, xn;

    printf("Type in a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);

    d = pow(b,2)-4*a*c;

    if (d == 0)
    {
        xp = ((-b)+sqrt(d)/2*a);
        printf("one result: %d\n", xp);
    }
    else if (d > 0)
    {
        xp = ((-b)+sqrt(d)/2*a);
        xn = ((-b)-sqrt(d)/2*a);
        printf("two solutions: %d and %d\n", xp, xn);
    }
    else
    {
        printf("No result.\n");
    }
    return 0;
}
