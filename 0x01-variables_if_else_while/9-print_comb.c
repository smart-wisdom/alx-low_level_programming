#include <stdio.h>
/**
 * main - Peints all possible combinatuons with commas
 * Return: 0
 */
int main(void)
{
	int d = '0';

	while
		(d <= '9')
		{
			putchar(d);
			if
				(d != 9)
			{
				putchar(',');
				putchar(' ');
			}
			d++;
		}
	putchar('\n');
	return (0);
}
