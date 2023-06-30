#include "main.h"
#include <stdio.h>
/**
 * print_buffer - function that prints a buffer
 * @b: input value
 * @size: content of size bytes
 * Return: 0
 */
void print_buffer(char *b, int size)
{
	int a, d, c;

	a = 0;

	if (size <= 0)
	{
	printf("\n");
	return;
	}
	while (a < size)
	{
	d = size - a < 10 ? size - a : 10;
	printf("%08x:", a);
	for (c = 0; c < 10; c++)
	{
	if (c < d)
	printf("%02x", *(b + a + c));
	else
	printf(" ");
	if (c % 2)
	{
	printf(" ");
	}
	}
	for (c = 0; c < d; c++)
	{
	int x = *(b + a + c);

	if (x < 32 || x > 132)
	{
	x = '.';
	}
	printf("%c", x);
	}
	printf("\n");
	a += 10;
	}
}
