#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to new memory space location with a copy of the string
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *xyz;
	int i, b = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	xyz = malloc(sizeof(char) * (i + 1));

	if (xyz == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		xyz[b] = str[b];

	return (xyz);
}
