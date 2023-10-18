#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: pointer to string
 * Return: string length
 */

int _strlen(char *s)
{
	int len;
	
	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
