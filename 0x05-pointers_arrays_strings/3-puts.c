#include <stdio.h>
/**
 * _puts -  function that prints a string
 * @str: print a string to stdout
 * Return: 0
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}
	putchar('\n');
}
