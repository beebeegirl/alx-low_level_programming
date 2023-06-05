#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h:head
 *
 * Return: the number of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t countnodes = 0;
	while (h != NULL)

{
printf("%d\n", h->n);
h = h->next;
countnodes++;
}
return (countnodes);
}
