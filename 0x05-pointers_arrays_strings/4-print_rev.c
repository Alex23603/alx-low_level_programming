#include "main.h"

/**
 * print_rev - This function prints a reverse string
 *
 * @s: This is the input string
 */
void print _rev(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
		;

	for (index = index - l; s[index] != '\0'; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
