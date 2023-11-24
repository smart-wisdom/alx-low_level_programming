#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would
 * need to flip to get from one number to another
 * @n: first number of bits to flip
 * @m: second number to flip
 * Return: number of flip chaged
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int diff = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = diff >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
