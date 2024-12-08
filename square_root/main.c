#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0.
 */
int main(void)
{
	int num;

	printf("Enter a number: ");
	scanf("%d", &num);

	sqroot(num);

	return (0);
}
