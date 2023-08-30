#include "lists.h"
/**
 * pop_listint - function deletes head node of a linked list
 * @head: pointer to a pointer address
 *
 * Return: (0) when success
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int a;

	if (*head == NULL)
		return (0);

	node = *head;
	a = (*head)->n;
	*head = (*head)->next;

	free(node);

	return (a);
}
