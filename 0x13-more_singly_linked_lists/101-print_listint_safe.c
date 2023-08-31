#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * find_listint_loop_pl - finds a loop in linked list
 * @head: pointer to address containig the list to search
 *
 * Return: address of node at the start of the loop
 */
listint_t *find_listint_loop_pl(listint_t *head)
{
	listint_t *ptr, end;

	if (head == NULL)
		return (NULL);

	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (ptr = head; ptr != end; ptr = ptr->next)
			if (ptr == end->next)
				return (end->next);
	}
	return (NULL);
}
/**
 * print_listint_safe - function that prints a linked list in a loop
 * @head: pointer to pointer of address
 *
 * Return: number of the nodes if fail returns (98)
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *nodeloop;
	size_t len = 0;
	int l;

	nodeloop = find_listint_loop_pl((listint_t *) head);

	for (len = 0, l = 1; (head != nodeloop || l) && head != NULL; len++)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		if (head == nodeloop)
			l = 0;
		head = head->next;
	}

	if (nodeloop != NULL)
		printf("-> [%p] %d\n", (void *) head, head->n);
	return (len);
}
