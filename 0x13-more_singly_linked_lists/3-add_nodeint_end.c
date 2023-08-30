#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_nodeint_end - function that adds a new node to the end of a list
 * @n: parameter for the element
 * @head: pointer to pointer for the address
 *
 * Return: the address of a new element return Null if fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_node = malloc(sizeof(listint_t));
	listint_t *next_ptr = *head;

	if (last_node == NULL)
		return (NULL);
	last_node->n = n;
	last_node->next = NULL;
	if (*head == NULL)
	{
		*head = last_node;
	}
	else
	{
		while (next_ptr->next != NULL)
		{
			next_ptr = next_ptr->next;
		}
		next_ptr->next = last_node;
	}
	return (last_node);
}
