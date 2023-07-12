#include <stdlib.h>
#include "main.h"
/**
 * count_word - function that counts the number of words
 * @s: evaluates the string
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, x, y;

	flag = 0;
	flag = 0;
	y = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			y++;
		}
	}

	return (y);
}
/**
 * **strtow - function that splits a string into words
 * @str: string to split
 * Return: strings of pointer arrays or NULL
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, length = 0, word, c = 0, start, end;

	while (*(str + length))
		length++;
	word = count_word(str);
	if (word == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (word + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}
