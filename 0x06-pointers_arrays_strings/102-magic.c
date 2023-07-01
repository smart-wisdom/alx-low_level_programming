#include <stdio.h>
/**
 * main - program that prints the variables in one line
 * *p: not to be modified
 * Return: 0
 */

int main(void)
{
	int a[5] = (65, 66, 67, 68, 69);
	int *p;

	a[2] = 1024;
	p = a;
	printf("a[2] = %d\n", *(p + 2));
	return (0);
}
