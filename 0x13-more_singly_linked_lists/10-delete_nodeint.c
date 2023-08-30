#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at index of a linked list
 * @head: pinter to pointer of address
 * @index: integer of the nodes
 *
 * Return: 1 if successful -1 if unsuccessful
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node = NULL;
	listint_t *prev = NULL;
	unsigned int i = 0;

	if (index > listint_len(*head) || listint_len(*head) == 0)
	{
		return (-1);
	}
	while (head != NULL)
	{
		node = *head;
		if (i == index)
		{
			if (i == 0)
			{
				*head = node->next;
				free(node);
				return (1);
			}
			prev->next = node->next;
			free(node);
			return (1);
		}
		if ((i + 1) == index)
			prev = *head;
		head = &((*head)->next);
		i++;
	}
	return (-1);
}

/**
 * listint_len - prints number of nodes.
 * @h: value of list
 *
 * Return: any data type list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *node = h;
	unsigned int nodea = 0;

	while (node != NULL)
	{
		node = node->next;
		nodea++;
	}
	return (nodea);
}
