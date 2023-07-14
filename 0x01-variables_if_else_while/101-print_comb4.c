#include <stdio.h>

/**
 * main - Entry pointer
 *
 * Description: a program that prints all possible
 * different combinations of three digits
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n, j, x;

	for (n = 0; n <= 9; n++)
	{
		for (j = n + 1; j <= 9; j++)
		{
			for (x = j + 1; x <= 9; x++)
			{
				putchar(n + '0');
				putchar(j + '0');
				putchar(x + '0');
				if (n == 7 && j == 8 && x == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
