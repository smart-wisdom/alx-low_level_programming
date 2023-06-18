#include <stdio.h>
/**
 * main - Program that prints possible combinations of two digits
 * Return: 0
 */
int main(void)
{
	int c, d;

	c = '0';
	d = '0';

	while (c <= '9')
	{
		while (d <= '9')
		{
			if (c < d)
			{
				putchar(c);
				putchar(d);
				if (c != '8' || (c == '8' && d != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
			d++;
		}
		c++;
		d = 0;
	}
	putchar('\n');
	return (0);
}
