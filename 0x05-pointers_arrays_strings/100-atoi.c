#include "main.h"
#include <stdio.h>
/**
 * _atoi - function that convert a string to an integer
 * @s: number in the string should be proceeded
 * Return: its integer
 */
int _atoi(char *s)
{
	int a = 0;
	unsigned int ui = 0;
	int min = 1;
	int isi = 0;

	while (s[a])
	{
		if (s[a] == 45)
		{
			min *= -1;
		}
	while (s[a] >= 48 && s[a] <= 57)
	{
		isi = 1;
		ui = (ui * 10) + (s[a] - '0');
		a++;
	}
	if (isi == 1)
	{
		break;
	}
	a++;
	}
	ui *= min;
	return (ui);
}
