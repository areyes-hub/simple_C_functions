#include "power.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _pow - raises a number to the power of another
 * @n: number to raise
 * @p: power to raise the number to
 * Return: The number raised to the power of the other
 */
int _pow(int n, int p)
{
	int result;
	int last_bit;

	result = 1;
	while (p > 0)
	{
		last_bit = (p & 1);
		if (last_bit)
		{
			result = result * n;
		}
		n = n * n;
		p = p >> 1;
	}
	return (result);
}
