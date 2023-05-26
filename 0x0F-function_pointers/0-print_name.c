#include <studio.h>
#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: the person name to print
 * @f: pointer to the function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	f(name);
}
