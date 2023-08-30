#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_nodeint - function that adds a new node at the begining of linked list
 * @n: contains the element
 * @head: pointer to a pointer to a head of a linked list
 *
 * Return: the address of new element if fail return NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
