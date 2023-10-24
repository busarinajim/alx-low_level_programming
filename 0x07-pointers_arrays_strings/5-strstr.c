#include "main.h"

/**
 * _strstr - locates a substring in a string
 * @haystack: string to search in
 * @needle: string to search for
 * Return: pointer to beginning of located substring or NULL
 *
 */

char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*haystack != '\0')
	{
		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
