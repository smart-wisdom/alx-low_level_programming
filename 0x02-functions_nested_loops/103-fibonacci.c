#include <stdio.h>
/**
 * main - program that finds and prints the sum of the even-valued terms,
 * less 4000000
 * Return: 0
 */
int main(void)
{
	int i = 0;
	long u = 1, v = 2, val = v;

	while (v + u < 4000000)
	{
	v += u;
	if (v % 2 == 0)
	val += v;
	u = v - u;
	++i;
	}
	printf("%ld\n", val);
	return (0);
}
