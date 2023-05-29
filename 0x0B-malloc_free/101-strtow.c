#include <stdlib.h>
#include "main.h"

/**
 * count_word - to count number of words in a string
 * @s: strings to check
 *
 * Return: a number of words
 */
int count_word(char *s)
{
	int flag, c, n;

	flag = 0;
	n = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			n++;
		}
	}

	return (n);
}
/**
 * **strtow - split strings into words
 * @str: strings to split
 *
 * Return: a pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, p = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[p] = tmp - c;
				p++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[p] = NULL;

	return (matrix);
}
