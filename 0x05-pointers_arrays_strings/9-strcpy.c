#include "main.h"

/**
 * _strcpy - copies string to buffer
 * @dest: destination for copied string
 * @src: where to copy string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *originalDest;

	originalDest = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (originalDest);
}
