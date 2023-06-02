#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t
 * @u: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *u)
{
size_t n = 0;

while (u)
{
if (u->str)
{
printf("[0] (nil)\n");
}
else
printf("[%u] %s\n", u->len, u->str);
u = u->next;
n++
}

return (n);
}
