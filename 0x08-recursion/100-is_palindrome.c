#include "main.h"
/**
 * _strlen_recursion - return length of a string
 * @s: string
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - compares each char of the string
 * @s: strings
 * @n1: small iterator
 * @n2: big iterator
 * Return: 0
 */
int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - detects a palindome string
 * @s: strings
 * Return: 1 if s is palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (0);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
