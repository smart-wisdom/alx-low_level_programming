#include "main.h"
#include <unistd.h>
/**
 * _putchar - The program to stdout
 * @c: character to print
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
