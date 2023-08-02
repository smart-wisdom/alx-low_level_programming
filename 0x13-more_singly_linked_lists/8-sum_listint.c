#include "lists.h"
/**
 * sum_listint - return the sum of all the data (n) of a listint_t
 * @head: poinyer yo sum the elements in the linked lists
 * Return: Return 0, if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
