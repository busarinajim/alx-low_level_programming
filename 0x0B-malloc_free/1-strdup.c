#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates string in memory and return pointer
 * @str: string to be duplicated
 * Return: pointer to duplicated memory
 *
 */

char *_strdup(char *str)
{
	size_t len;
	char *duplicate;
	size_t i;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	duplicate = malloc(len + 1);
	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		duplicate[i] = str[i];
	}
	return (duplicate);
}
