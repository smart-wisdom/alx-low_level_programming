#include "main.h"
#include <stdio.h>
/**
 * rot13 - function that encodes a string using rot13
 * @s: strings to point the parameter
 * Return: 0
 */
char *rot13(char *s)
{
	int x;
	int y;
	char data1[] = "ABCDEFGHIJKLMOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
	for (y = 0; y < 52; y++)
	{
	if (s[x] == data1[y])
	{
	s[x] = datarot[y];
	break;
	}
	}
	}
	return (s);
}
