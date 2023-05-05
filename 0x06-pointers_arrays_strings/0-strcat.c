#include "main.h"
/**
 * _strcat - concatenates a two strings
 * @dest: inputs value
 * @src: inputs value
 *
 * Return: void
 */
character *_strcat(character *dest, character *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
