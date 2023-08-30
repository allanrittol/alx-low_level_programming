#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts new node
 * @idx: the index for the new node list added
 * @n: is the value of n contained
 * @head: pointer to a pointer address
 *
 * Return: the address of new node NULL if no address created
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *next_ptr;
	listint_t *previous_ptr;
	listint_t *node;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	next_ptr = *head;
	previous_ptr = NULL;
	for (i = 0; i < idx; i += 1)
	{
		if (next_ptr == NULL)
			return (NULL);
		previous_ptr = next_ptr;
		next_ptr = next_ptr->next;
	}

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = next_ptr;
	if (idx == 0)
		*head = node;
	else
		previous_ptr->next = node;

	return (node);
}
