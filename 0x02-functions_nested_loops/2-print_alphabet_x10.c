#include "main.h"

/**
 * print_alphabet_x10 - Print 10x the alphabets in lowercase
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char d;
	int i = 0;

	while (i <= 9)
	{
	for (d = 'a'; d <= 'z'; d++)
	{
	_putchar(d);
	}

	_putchar('\n');
	i++;
	}
}
