#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - A function that prints all the elements of a list
 * @h:Is a pointer to the head of the listint_t list
 *
 * Return: the number of nodes
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
