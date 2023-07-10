#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: input destination
 * @src: string to copy input
 * @n: input
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];
	return (dest);
}
