#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout.
 * @*str: string to print
 * Return: (void)
*/

void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; str++)
		_putchar(*str + '0');
	_putchar('\n');
}
