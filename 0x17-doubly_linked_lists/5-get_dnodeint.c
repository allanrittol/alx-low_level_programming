#include "lists.h"
/**
 * *get_dnodeint_at_index - returns the nth node of dlistint_t li
 * @head: the head of the dlistint_t list
 * @index: the index of the node, starts from 0
 *
 * Return: NULL if node does't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
