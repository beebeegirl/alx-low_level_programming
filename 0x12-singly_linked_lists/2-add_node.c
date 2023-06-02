#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "lists.h"

/**
 * Adds a new node at the beginning of a list_t list
 * @str: string to be duplicated
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node = (list_t *)malloc(sizeof(list_t));

if (new_node == NULL)
return (NULL);

new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}

new_node->next = *head;
*head = new_node;

return (new_node);
}
