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
	int char = 0;

	while (char < 8)
	{
		_puthchar(str[char]);
		char++;
	}

	_putchar('\n');
	return (0);
}
