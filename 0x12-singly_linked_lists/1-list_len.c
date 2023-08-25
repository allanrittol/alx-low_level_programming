#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* list_len - returns no. of elements in a linked_list
* @h: pointer to struct linked_list
* Return: no. of elements
**/

size_t list_len(const list_t *h)
{
	size_t elements;

	elements = 0;
	while (h)
	{
		h = h->next;
		elements += 1;
	}

	return (elements);
}
