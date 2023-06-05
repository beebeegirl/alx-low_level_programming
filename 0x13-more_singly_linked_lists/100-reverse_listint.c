#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_listint - function that reverses a listint_t list
 * @head: points to the node
 *
 * Return:pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *prev;
listint_t *next;

if (head == NULL || *head == NULL)
return (NULL);
if ((*head)->next == NULL)
return (*head);
prev = NULL;
while (*head != NULL)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}
*head = prev;
return (*head);
}
