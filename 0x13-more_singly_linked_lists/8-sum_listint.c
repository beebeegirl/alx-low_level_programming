#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - returns the sum of all data (n) of a listint_t list
 * @head: pointsto the first node
 *
 * Return: sum of all the data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
