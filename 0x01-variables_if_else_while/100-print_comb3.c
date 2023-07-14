#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n, j;

	for (n = 0; n < 9; n++)
	{
		for (j = n + 1; j < 10; j++)
		{
			putchar((n % 10) + '0');
			putchar((j % 10) + '0');

			if (n == 8 && j == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
