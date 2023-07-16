#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define ERR_MSG "Error"

/**
 * is_digit - string containing a non-digit char
 * @s: eveluated string
 * Return: 0 if non-digit found, 1 otherwise
 */
int is_digit(char *s)
{
	int x = 0;

	while (s[x])
	{
		if (s[x] < '0' || s[x] > '9')
			return (0);
		x++;
	}
	return (1);
}

/**
 * _strlen - length of string to be returned
 * @s: evaluate string
 * Return: length of it string
 */
int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 * errors - handles main errors
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - program that multiplies two positive numbers
 * @argc: numbers of arguments
 * @argv: arrays f arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int lent1, lent2, lent, x, carry, dig1, dig2, *result, j = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	lent1 = _strlen(s1);
	lent2 = _strlen(s2);
	lent = lent1 + lent2 + 1;
	result = malloc(sizeof(int) * lent);
	if (!result)
		return (1);
	for (x = 0; x <= lent1 + lent2; x++)
		result[x] = 0;
	for (lent1 = lent1 - 1; lent1 >= 0; lent1--)
	{
		dig1 = s1[lent1] - '0';
		carry = 0;
		for (lent2 = _strlen(s2) - 1; lent2 >= 0; lent2--)
		{
			dig2 = s2[lent2] - '0';
			carry += result[lent1 + lent2 + 1] + (dig1 + dig2);
			result[lent1 + lent2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[lent1 + lent2 + 1] += carry;
	}
	for (x = 0; x < lent - 1; x++)
	{
		if (result[x])
			j = 1;
		if (j)
			_putchar(result[x] + '0');
	}
	if (!j)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
