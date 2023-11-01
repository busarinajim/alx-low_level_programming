#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to newly allocated space in memory
 *
 */

char *str_concat(char *s1, char *s2)
{
	size_t len1;
	size_t len2;
	size_t i;
	char *concatenated;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = 0;
	len2 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	concatenated = malloc(len1 + len2 + 1);
	if (concatenated == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		concatenated[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		concatenated[len1 + i] = s2[i];
	}
	concatenated[len1 + len2] = '\0';
	return (concatenated);
}
