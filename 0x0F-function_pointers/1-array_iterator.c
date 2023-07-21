#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function that executes a parameter on each elem
 * @array: array
 * @size: size of element to print
 * @action: pointer to the function to be used
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
