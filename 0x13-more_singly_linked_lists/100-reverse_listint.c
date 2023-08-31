#include "lists.h"
/**
 * reverse_listint - function that reverses a linked list
 * @head: pointer to pointer address
 *
 * Return: poiner to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next = NULL;

	if (head == NULL)
		return (NULL);
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = (*head);
		(*head) = next;
	}
	*head = previous;
	return (*head);
}
