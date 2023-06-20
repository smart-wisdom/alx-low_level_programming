#include "main.h"
/**
 * main - prints the alphabet, in lowercase
 */
void print_alphabet(void)
{
	char low_a;

	for (low_a = 'a'; low_a <= 'z'; low_a++)
	{
		_putchar(low_a);
	}
	_putchar('\n');
}
