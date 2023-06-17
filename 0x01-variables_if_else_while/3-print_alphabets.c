#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase
 * Return: 0
 */
int main(void)
{
	char Lower = 'a';
	char Upper = 'A';

	while
		(Lower <= 'z');
	{
			putchar(Lower);
			Lower++;
	} while
		(Upper <= 'Z');
	{
			putchar(Upper);
			Upper++;
	}
	putchar('\n');
	return (0);
}
