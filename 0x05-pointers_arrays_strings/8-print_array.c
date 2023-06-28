#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints n elements of an array of integers
 * @a: arrays to be printed
 * @n: numbers of arrays to be printed
 * Return: 0
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
	printf("%d", a[x]);
	if (x != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
