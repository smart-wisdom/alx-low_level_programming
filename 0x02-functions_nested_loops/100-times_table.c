#include "main.h"
#include <stdio.h>
/**
 * print_times_table - function that prints the n times table, starting with 0
 * @n: check the times table printed
 * starts with 0
 */
void print_times_table(int n)
{
	int q, m, p;

	if (n >= 0 && n <= 15)
	{
	for (q = 0; q <= n; q++)
	{
	_putchar('0');
	for (m = 1; m <= n; m++)
	{
	_putchar(',');
	_putchar(' ');
	p = q * m;
	if (p <= 99)
	_putchar(' ');
	if (p <= 9)
	_putchar(' ');
	if (p >= 100)
	{
	_putchar((p / 100) + '0');
	_putchar(((p / 10)) % 10 + '0');
	}
	else if (p <= 99 && p >= 10)
	{
	_putchar((p / 10) + '0');
	}
	_putchar((p % 10) + '0');
	}
	_putchar('\n');
	}
	}
}
