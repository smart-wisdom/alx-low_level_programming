#include "main.h"
/**
 * _isalpha - Function that check, alphabetical character
 * @c: Check characters
 * Return: 1 for lowercase and uppercase or 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
