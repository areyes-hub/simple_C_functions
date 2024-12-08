#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0.
 */
int main(void)
{
	char name[25] = "Hello";
	char surname[25] = "Angel";

	_strcat(name, ", ");
	_strcat(name, surname);
	_strcat(name, "!");
	_strcat(name, "\n");

	printf("%s", name);
	return (0);
}
