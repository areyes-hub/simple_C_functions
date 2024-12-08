#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0.
 */
int main(void)
{
	char greeting[25] = "Hello, Angel!";
	char greetcpy[25];

	_strcpy(greetcpy, greeting);
	printf("%s\n", greetcpy);
	return (0);
}
