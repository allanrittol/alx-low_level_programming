#include "lists.h"
/**
 * free_listint2 - function that frees a linked list
 * @head: pointer to a pointer address
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			node = *head;
			(*head) = (*head)->next;
			free(node);
		}
		(*head) = NULL;
	}
}

