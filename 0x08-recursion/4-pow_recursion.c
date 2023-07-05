#include "main.h"
/**
 * _pow_recursion - function that returns the value of x to y power
 * @x: value to multiply
 * @y: times of value to multiply
 * Return: value that multiplied y times
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
