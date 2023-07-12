#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments
 * @ac: input int
 * @av: double pointer
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, x, y = 0, n = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x]; x++)
			n++;
	}
	n += ac;

	str = malloc(sizeof(char) * n + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (x = 0; av[i][x]; x++)
	{
		str[y] = av[i][x];
		y++;
	}
	if (str[y] == '\0')
	{
		str[y++] = '\n';
	}
	}
	return (str);
}
