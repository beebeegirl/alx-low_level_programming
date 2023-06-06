#include "lists.h"

/**
 * get_nodeint_at_index- function that returns the nth node of a listint_t
 * @head: points the first node
 * @index: index of the node
 *
 * Return: NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *head;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
