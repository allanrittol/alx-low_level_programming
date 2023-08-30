#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_listint - function that prints the elements of the list
 * @h: contiains elemnts of the list
 *
 * Return: node number
 */
size_t print_listint(const listint_t *h)
{
	size_t node_C;
	const listint_t *next_ptr;

	next_ptr = h;
	node_C = 0;

	while (next_ptr != NULL)
	{
		printf("%i\n", next_ptr->n);
		node_C += 1;
		next_ptr = next_ptr->next;
	}
	return (node_C);
}
