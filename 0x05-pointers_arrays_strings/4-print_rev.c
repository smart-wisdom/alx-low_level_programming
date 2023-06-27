#include "main.h"
#include <stdio.h>
/**
 * print_rev - function that prints a string, in reverse
 * @s: print the string
 * Return: 0
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	for (c -= 1; c >= 0; c--)
	{
		putchar(s[c]);
	}
	putchar('\n');
}
