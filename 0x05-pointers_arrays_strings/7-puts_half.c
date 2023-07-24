#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line
 * @str: string
 * Return:(void)
*/

void puts_half(char *str)
{
	int len;

	while (str[len])
		len++;

	for (len /= 2; str[len] != '\0'; len++)
		_putchar(str[len]);
	_putchar('\n');
}
