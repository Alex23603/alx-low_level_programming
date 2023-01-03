#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: string
 * @c: character to search
 * Return: pointer to the first occurrence of character c in the string s
 */

char *_strchr(char *s, char c)
{

	while (*S != '\0') /*Declaring WHILE*/
	{
		if (*s == c) /*if s == c*/
		{
			return (s); /*return s*/
		}

		++s;
	}

	if (*S == c)
	{
		return (s);
	}


	return (0);/* value null*/
}
