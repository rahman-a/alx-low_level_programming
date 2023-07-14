#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program that prints the alphabet in lowercase
 * and then in uppercase, followed by a new line.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char lower_case = 'a';
	char upper_case = 'A';

	/* print lower case alphabet */
	while (lower_case <= 'z')
	{
		putchar(lower_case);
		lower_case++;
	};

	/* print upper case alphabet */
	while (upper_case <= 'Z')
	{
		putchar(upper_case);
		upper_case++;
	};

	putchar('\n');
	return (0);
}
