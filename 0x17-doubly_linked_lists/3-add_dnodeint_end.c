#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end of dlistint_t li
 * @head: pointer to the head of the dlistint_t list
 * @n: integer for the new node to contain
 *
 * Return: if fail return NULL if success adrress of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	last = *head;

	while (last->next != NULL)
		last = last->next;
	last->next = new;
	last->prev = last;
	return (new);
}
