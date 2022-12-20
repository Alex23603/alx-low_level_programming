#include "main.h"

/**
 * _strcpy - copiar el contenido de uno a otra variable
 * @dest: This is destiny
 * @src; this is the copia
 *
 * Return: This returns copy
 */
char *strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
