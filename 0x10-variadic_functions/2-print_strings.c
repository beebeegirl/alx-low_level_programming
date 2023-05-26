#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * @...: A variable number of strings to be printed
 *
 * Description: If separator is NULL, it is not printed
 * If one of the string is NULL, print (nil) instead
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list numstring;
	unsigned int y;
	char *str;

	va_start(numstring, n);

	for (y = 0; y < n; y++)
	{
		str = va_arg(numstring, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (y != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(numstring);
}
