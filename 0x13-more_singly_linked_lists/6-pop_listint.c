#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - This is a function that deletes the head node of a listint_t
 * @head:pointer head to the first element
 *
 * Return: empty
 */

int pop_listint(listint_t **head)
{
	listint_t *first;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	n = (*head)->n;
	first = (*head)->next;

	free(*head);
	*head = first;

	return (n);
}
