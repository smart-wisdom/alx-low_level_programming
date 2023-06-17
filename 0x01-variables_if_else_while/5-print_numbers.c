#include <stdio.h>
/**
 * main - Program that prints all single numbers of base ten
 * Return: 0
 */
int main(void)
{
	int d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
