#include "main.h"
/**
 * _isdigit -  function that checks for a digit
 * @c: Check the digits
 * Return: 1 for a digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
