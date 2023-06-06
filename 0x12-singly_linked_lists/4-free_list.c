#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * free_list - This is a function that frees a list_t list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
