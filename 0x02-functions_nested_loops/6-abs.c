#include "main.h"
#include <stdio.h>
/**
 * _abs - function that computes the absolute value of an integer
 * @c: Check numbers to be computed
 * Return: Absolute number of integer
 */
int _abs(int c)
{
	int abs_val;

	if (c < 0)
	{
	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
