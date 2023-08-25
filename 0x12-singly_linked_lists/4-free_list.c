#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_list - function frees linked_list
* @head: pointer to the head of a linked_list
* Return: nothing
*/

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
