#include "main.h"
/**
 * print_diagonal -  function that draws a diagonal line parameter
 * @n: the number of times the to print \ lines
 * Return: 0
 */
void print_diagonal(int n)
{
	int a, c;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (a = 0; a < n; a++)
	{
	for (c = 0; c < a; c++)
	{
	_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
