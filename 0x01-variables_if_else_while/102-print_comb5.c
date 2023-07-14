#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program that prints all possible
 * combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int counter = 0;
	int n;

	while (counter < 99)
	{
		for (n = 0; n <= 99; n++)
		{
			putchar((counter / 10) + '0');
			putchar((counter % 10) + '0');
			putchar(' ');
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');

			if (counter == 98 && n == 99)
				continue;

			putchar(',');
			putchar(' ');
		};
		counter++;
	};

	putchar('\n');
	return (0);
}
