#include "lists.h"

/**
 * add_nodeint -  adds a new node at the beginning of a listint_t list
 * @h: head
 * @n: int add to the linked list
 *
 * Return:  the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;
	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
			newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
