#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings
 * @separator: strint to printed between strings
 * @n: number of arguments
 * Return: nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *str;
	va_list strings;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(strings, n);

	while (i < n)
	{
		str = va_arg(strings, char *);
		if (str)
		{
			printf("%s", str);
		} else
			printf("%s", "(nil)");
		if (separator && i != (n - 1))
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(strings);
}
