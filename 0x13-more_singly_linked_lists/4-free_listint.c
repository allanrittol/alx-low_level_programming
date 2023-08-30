#include "lists.h"

/**
 * free_listint - frees a linked lists.
 * @head: pointer to a struct
 *
 * Return: void function
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
