#include <stdio.h>
/**
 * main - wrote a program that would steal passwords of students
 * Return: 0
 */
int main(void)
{
	int i = 0;
	long v = 1, w = 2;

	while (i < 50)
	{
	if (i == 0)
	printf("%ld", v);
	else if (i == 1)
	printf(", %ld", w);
	else
	{
	w += v;
	v = w - v;
	printf(", %ld", w);
	}
	++i;
	}
	printf('\n');
	return (0);
}
