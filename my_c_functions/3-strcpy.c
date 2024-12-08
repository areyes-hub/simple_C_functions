#include "main.h"
/**
 * _strcpy - Copy a string from a source into a destination
 * @dest: copy into
 * @source: copy from
 * Return: void
 */
void _strcpy(char *dest, char *source)
{
	while (*source != '\0')
	{
		*dest = *source;
		dest++;
		source++;
	}
	*dest = '\0';
}
