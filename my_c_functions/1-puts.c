#include "main.h"
/**
 * _puts - Prints a string of characters
 * @s: Parameter to evaluate
 * Return: void
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
}
