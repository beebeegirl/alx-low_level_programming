#include "main.h"
#include <unistd.h>
/**
 * _putchar - It writes the char c to stdout
 * @c: Is the char to print
 *
 * Return: On success 1.
 * On error, Returns -1, and sets errno properly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
