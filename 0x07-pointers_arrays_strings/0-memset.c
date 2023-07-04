#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: pointing its destination
 * @b: the constant byte
 * @n: bytes
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;
	return (s);
}
