#include "main.h"
#include <stdio.h>
/**
 * puts2 - function that prints every other character of a string
 * @str: strings should be modified
 * Return: 0
 */
void puts2(char *str)
{
	int i;
	int x = 0;

	while (str[x] != '\0')
	{
	x++;
	}

	for (i = 0; i < x; i += 2)
	{
	putchar(str[i]);
	}
	putchar('\n');
}
