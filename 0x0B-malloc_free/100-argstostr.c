#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main
 * @ac: integer input
 * @av: double pointer array char
 * Return: nothing
 */
char *argstostr(int ac, char **av)
{
	int i, m, x = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (m = 0; av[i][m]; m++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (m = 0; av[i][m]; m++)
	{
		str[x] = av[i][m];
		x++;
	}
	if (str[x] == '\0')
	{
		str[x++] = '\n';
	}
	}
	return (str);
}
