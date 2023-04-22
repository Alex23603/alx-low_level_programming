#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its  all parameters...
 * @n:  number of paramters passed to the function...
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If v == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int v, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, v);

	for (i = 0; i < v; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
