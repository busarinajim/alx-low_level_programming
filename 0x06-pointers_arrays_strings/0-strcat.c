#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: concatenated string
 *
 */

char *_strcat(char *dest, char *src)
{
	char *dest_ptr;

	*dest_ptr = dest;
	while (dest != '\0')
	{
		dest++;
	}
	while (src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (dest_ptr);
}
