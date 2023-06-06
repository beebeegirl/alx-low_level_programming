#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: where to search
 *
 * Return:The address of the node where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
listint_t *start;
listint_t *loop;

start = loop = head;
while (start && loop && loop->next)
{
start = start->next;
loop = loop->next->next;
if (start == loop)
{

start = head;
break;
}
}
if (!start || !loop || !loop->next)
return (NULL);

while (start != loop)
{
start = start->next;
loop = loop->next;
}
return (loop);
}
