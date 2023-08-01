#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list
 * @head: listint_t lists to be get freed
 */
void free_listint2(listint_t **head)
{
		while (*head != NULL)
	{
		listint_t *next = (*head)->next;

		free(*head);
		*head = next;
	}

	*head = NULL;
}
