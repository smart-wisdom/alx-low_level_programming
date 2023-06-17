#include <stdio.h>
/**
 * main - A program that prints alphabets without q and e
 * Return: 0
 */
int main(void)
{
	char b = 'a';

	while (b <= 'z')
	{
		if (b != 'q' && b != 'e')
		{
			putchar(b);
		}
		b++;
	}
	putchar('\n');
	return (0);
}
