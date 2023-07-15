#include "main.h"
#include <stdlib.h>
/**
 * *_memset - memory with a constant byte
 * @s: filled memory area
 * @b: copy car
 * @n: number of times to copy b
 * Return: memory area s to point
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}

/**
 * *_calloc - function that allocates memory for an array
 * @nmemb: element in the array
 * @size: each element sizes
 * Return: allocated memory pointed
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
