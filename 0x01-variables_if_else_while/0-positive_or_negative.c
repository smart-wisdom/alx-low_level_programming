#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A positive or negative programing
 * Return: Always 0
 */

int main()
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is possitive \n", n);
	else if (n == 0)
		printf("%d is zero \n", n);
	else
		printf("%d is negative \n", n);
	return (0);
}
