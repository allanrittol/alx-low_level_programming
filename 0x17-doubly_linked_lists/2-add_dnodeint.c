#include "lists.h"
/**
 * add_dnodeint - function that adds new node at the begining of dlistint_t lis
 * @n: container for the new node integer
 * @head: Pointer to the head of the dlistint_t
 *
 * Return: address of the new element, NULL if not successful
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
