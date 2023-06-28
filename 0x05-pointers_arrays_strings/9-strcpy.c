#include "main.h"
#include <stdio.h>
/**
 * _strcpy -  function that copies the string pointed to
 * @dest: Pointer value
 * @src: string to be copied
 * Return: pointer value to dest
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
	dest[x] = src[x];
	}
	dest[x++] = '\0';
	return (dest);
}
