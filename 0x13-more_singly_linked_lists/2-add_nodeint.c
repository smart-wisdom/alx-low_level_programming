#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the beginning of a listint_t
 * @head: the pointer to the top node in the list
 * @n: new node of data to be inserted
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
