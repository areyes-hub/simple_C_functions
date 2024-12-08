#include "main.h"
/**
 * _strcat - Cocatenates two strings
 * @dest: string to append to
 * @source: string to append
 * Return: void
 */
void _strcat(char *dest, char *source)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (*source != '\0')
	{
		*dest = *source;
		dest++;
		source++;
	}
	*dest = '\0';
}
