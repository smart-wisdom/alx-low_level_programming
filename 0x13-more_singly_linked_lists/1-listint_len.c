#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t
 * @h: type of listint_t link to traverse
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;
	const listint_t *node = h;

	while (node != NULL)
	{
		num++;
		node = node->next;
	}
	return (num);
}
