#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: number of arguments
 * Return: sum of argument, 0 if n = 0
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list countptr;

	if (n == 0)
		return (0);

	va_start(countptr, n);
	while (i < n)
	{
		sum += va_arg(countptr, int);
		i++;
	}

	va_end(countptr);

	return (sum);
}

