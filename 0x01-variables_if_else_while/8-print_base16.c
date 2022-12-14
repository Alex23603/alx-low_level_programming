#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int  main(void)
{
	char c = 'a';
	int num;

	for (num = 0; num < 16 ; num++)
	{
		if (num < 10)
		{
			putchar(num + 'o');
		} else
		{
			putchar(c);
			c++;
		}
	}
	putchar('\n');
	return (0);
}
