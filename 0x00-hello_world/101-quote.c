#include <stdio.h>
#include <unistd.h>
/**
 * main - A program without printf and puts
 *
 * Return: always (1)
 *
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Kopar, 2015-10-19\n", 83);
	return (1);
}
