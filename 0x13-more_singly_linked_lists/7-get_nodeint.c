#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t
 * @head: pointer to the nth element in the linked list
 * @index: the index of the node, starting at 0
 * Return: NULL, if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (current == NULL)
		{
			return (NULL);
		}
	current = current->next;
	}

	return (current);
}
