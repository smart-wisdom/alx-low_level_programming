#include "lists.h"
/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: pointer to the first node in the list
 * Return:  pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = NULL;
	listint_t *prev = NULL;

	while (*head)
	{
		current = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = current;
	}

	*head = prev;

	return (*head);
}
