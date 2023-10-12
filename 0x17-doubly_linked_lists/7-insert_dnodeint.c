#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts new node
 * @h: pointer to the head of the dlistint_t list
 * @idx: the position to insert the new node
 * @n: the integer for the new node to contain
 *
 * Return: the address of the new node, NULL if fail
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
		temp = temp->next;
	{

	if (temp == NULL)
		return (NULL);
	}

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = temp;
	new->next = temp->next;
	temp->next->prev = new;
	temp->next = new;

	return (new);
}
