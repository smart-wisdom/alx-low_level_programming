#include "lists.h"
/**
 * free_listint_safe - function that frees a listint_t list
 * @h: pointer to the first node in the linked list
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp;
	int f;

	if (!h || !*h)
	{
		return (0);
	}

	while (*h != NULL)
	{
		f = *h - (*h)->next;
		if (f > 0)
		{
			temp = *h;
			*h = (*h)->next;
			free(*h);
			*h = temp;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}

	*h = NULL;

	return (count);
}
