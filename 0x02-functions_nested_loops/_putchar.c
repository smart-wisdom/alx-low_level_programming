#include "main.h"
#include <unistd.h>
/**
 * _putchar - Writeing a the program to stdout
 * @c: Character to print
 * Return: 1
 * on error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
