#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number
 * @n: number to check
 * Return: value integer
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - number of prime to check
 * @n: number to check
 * @i: iteration times
 * Return: 1 if prime or 0 composite
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (check_prime(n, i + 1));
}
