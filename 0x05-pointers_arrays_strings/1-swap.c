#include <stdio.h>
/**
 * swap_int -  function that swaps the values of two integers
 * @a: first int to swap
 * @b: second int to swap
 * Return: 0
 */
void swap_int(int *a, int *b)
/*function that swaps the values of two integers*/
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
