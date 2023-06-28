#include "main.h"
#include <stdio.h>
/**
 * puts_half - function that prints half of a string
 * @str: strings to be printed
 * Return: 0
 */
void puts_half(char *str)
{
	int x = 0;
	int y;

	while (str[x] != '\0')
	{
	x++;
	}
	if (x % 2 == 1)
	{
	y = (x - 1) / 2;
	y += 1;
	}
	else
	{
	y = x / 2;
	}

	for (; y < x; y++)
	{
	putchar(str[y]);
	}
	putchar('\n');
}
