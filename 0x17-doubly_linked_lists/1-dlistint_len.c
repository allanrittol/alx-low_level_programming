#include "lists.h"
/**
 * dlistint_len - function that gets the no. of elements in a dlistint_t lists
 * @h: head of the dlistint_t list
 *
 * Return: number of elements in the dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
