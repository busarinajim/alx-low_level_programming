#include "main.h"

/**
 * _strchr - finds character c in string s
 * @s: string
 * @c: character to find in s
 * Return: pointer to first occurence of c or NULL if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
