#include <stdio.h>
/**
 * main - possible combinations of two two-digit numbers
 * Return: 0
 */
int main(void)
{
	int i, j;
	int c, b, d, e;

	for (i = 0; i < 100; i++)
	{
		c = i / 10;
		b = i % 10;

		for (j = 0; j < 100; j++)
		{
			d = j / 10;
			e = j % 10;

			if (c < d || (c == d && b < e))
			{
				putchar(c + '0');
				putchar(b + '0');
				putchar(32);
				putchar(d + '0');
				putchar(e + '0');

				if (!(c == 9 && b == 8))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);

	return (0);
}
