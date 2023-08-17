#include <stdarg.h>
#include <stdio.h>
#include  "variadic_functions.h"

/**
 * print_numbers -  a function that prints numbers
 * @separator: constant char
 * @n: number of integer passed
 * Return: nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list numbers;

	va_start(numbers, n);

	while (i < n)
	{
		printf("%d", va_arg(numbers, int));
		if (separator && i != (n - 1))
			printf("%s", separator);
		if (i == (n - 1))
			printf("\n");
		i++;
	}

	va_end(numbers);
}
