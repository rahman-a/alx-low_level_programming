/**
 * main - Entry point
 *
 * Description: a program that prints _putchar, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char[] str = "_putchar";
	int letter = 0;

	while (letter < 8)
	{
		_puthchar(str[letter]);
		letter++;
	}

	_putchar('\n');
	return (0);
}
