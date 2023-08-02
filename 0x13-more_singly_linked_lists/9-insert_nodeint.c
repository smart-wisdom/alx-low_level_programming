#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer that insert an element in the linked lists
 * @idx: index of the list where the new node should be added
 * @n: new node
 * Return: the address of the new node, or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *current_node = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node || head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	else

	{

		for (i = 0; current_node && i < idx - 1; i++)
			current_node = current_node->next;
		new_node->next = current_node->next;
		current_node->next = new_node;
	}
	return (new_node);
	{
		return (NULL);
	}
}
