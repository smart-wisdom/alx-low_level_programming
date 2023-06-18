#include <stdio.h>
/**
 * main - Possible different combinations of three digits
 * Return: 0
 */
int main(void)
{
	int b, d, c;

	b = '0';
	d = '0';
	c = '0';

	while (b <= '9')
	{
		while (d <= '9')
		{
			while (c <= '9')
			{
				if (b < d && d < c)
				{
					putchar(b);
					putchar(d);
					putchar(c);
					if (b != '7' || (d == '7' && c != '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
				c++;
			}
			d++;
			c = 0;
		}
		b++;
		d = 0;
	}
	putchar('\n');
	return (0);
}
