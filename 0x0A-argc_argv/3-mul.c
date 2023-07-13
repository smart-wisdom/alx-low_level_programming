#include <stdio.h>
#include "main.h"
/**
 * _atoi - convert strings to its integer
 * @s: converted strings
 * Return: int converted from string
 */
int _atoi(char *s)
{
	int i, x, n, length, f, digs;

	i = 0;
	x = 0;
	n = 0;
	length = 0;
	f = 0;
	digs = 0;

	while (s[length] != '\0')
		length++;

	while (i < length && f == 0)
	{
		if (s[i] == '-')
			++x;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digs = s[i] - '0';
			if (x % 2)
				digs = -digs;
			n = n * 10 + digs;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - program should print the result of the multiplication
 * @argc: argument numbers
 * @argv: argument arrays
 * Return: 0 and 1 error
 */
int main(int argc, char *argv[])
{
	int r, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	r = num1 * num2;
	printf("%d\n", r);

	return (0);
}
