#include <unistd.h>
#include "main.h"
/**
 * _putchar - Prints a character
 * @c: Parameter to evaluate
 * Return: A character
 */
char _putchar(char c)
{
	return (write(1, &c, 1));
}
