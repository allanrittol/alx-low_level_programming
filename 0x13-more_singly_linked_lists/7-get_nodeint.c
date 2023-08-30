#include "lists.h"
/**
 * get_nodeint_at_index - returns the number of elements
 * in a linked list
 * @head: pointer to a pionter of the address
 * @index: index contains the return value
 * Returns: int the nth node if it exist if not returns NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = NULL;

	unsigned int count = 0;

	while (head != NULL)
	{
		if (count <= index)
		{
			if (count == index)
			{
				node = head;
				break;
			}
		}
		else
		{
			return (NULL);
		}
		count++;
		head = head->next;
	}
	return (node);
}
