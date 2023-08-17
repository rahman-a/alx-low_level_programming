#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char -  a function to printa char
 * @separator: strint to separate between values
 * @list: list of arguments
 * Return: nothing
*/

void print_char(char *separator, va_list list)
{
	printf("%s%c", separator, va_arg(list, int));
}

/**
 * print_integer -  a function to printa integer
 * @separator: strint to separate between values
 * @list: list of arguments
 * Return: nothing
*/

void print_integer(char *separator, va_list list)
{
	printf("%s%d", separator, va_arg(list, int));
}

/**
 * print_float -  a function to printa float
 * @separator: strint to separate between values
 * @list: list of arguments
 * Return: nothing
*/

void print_float(char *separator, va_list list)
{
	printf("%s%f", separator, va_arg(list, double));
}

/**
 * print_string - a function to printa string
 * @separator: strint to separate between values
 * @list: list of arguments
 * Return: nothing
*/

void print_string(char *separator, va_list list)
{
	char *str = va_arg(list, char *);

	if (!str)
		str = "(nil)";
	printf("%s%s", separator, str);
}

/**
 * print_all - a function that prints anything.
 * @format: list of types of arguments
 * Return: nothing
*/

void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list arguments;
	format_t types[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(arguments, format);
	while (format && format[i])
	{
		j = 0;
		while (types[j].type)
		{
			if (format[i] == types[j].type[0])
			{
				types[j].print(separator, arguments);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(arguments);
}
