#include <stdio.h>
#include <unistd.h>
/**
 * main - A c program that prints a new line to the standard error
 *
 * Return: always (1)
 *
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Kopar, 2015-10-19\n", 59);
	return (1);
}
