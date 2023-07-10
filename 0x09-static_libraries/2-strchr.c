#include "main.h"
#include <stdio.h>
/**
 * _strchr - function that locates a character in a string
 * @s: inputs the strings
 * @c: locates input character
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
		return (s + x);
	}
	return (NULL);
}
