#include <stdio.h>
/**
 * _strlen - function that returns the length of a string
 * @s: get the lenght of strings
 * Return: 0
 */
int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
	length++;
	return (length);
}
