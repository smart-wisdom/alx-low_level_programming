#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: input its substring
 * @accept: input only bytes
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
			n++;
			break;
			}
		else if (accept[x + 1] == '\0')
			return (n);
	}
	s++;
	}
	return (n);
}
