#include <stdio.h>

/**
 * main -  Entry point
 *
 * Description: prints the alphabet in lowercase except q and e
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'e' || letter == 'q')
		{
			letter++;
			continue;
		}
		putchar(letter);
		letter++;
	};

	putchar('\n');
	return (0);
}
