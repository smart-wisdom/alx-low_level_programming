#include "main.h"
/**
 * main -  program that computes and prints the sum of all the multiples
 * Return: 0
 */
int main(void)
{
	int i, u = 0;

	while (i < 1024)
	{
	if ((i % 3 == 0) || (i % 5 == 0))
	{
	u += i;
	}
	i++;
	}
	printf("%d\n", u);
	return (0);
}
