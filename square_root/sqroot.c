#include "main.h"
#include <stdio.h>
/**
 * sqroot - calculates the square root
 * @n: parameter to evaluate
 * Return: void
 */
void sqroot(int n)
{
	double sqr;

	for (sqr = 0.01; sqr * sqr < n; sqr += 0.01)
	{
		;
	}
	printf("The square root of %d is %.2lf\n", n, sqr);
}
