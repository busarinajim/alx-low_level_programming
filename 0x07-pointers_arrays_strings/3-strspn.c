#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 * @s: string that contains substring
 * @accept: substring of s
 * Return: number of bytes from initial segment of s that contains only accept
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *a = accept;

	while (*s != '\0')
	{
		while (*a != '\0')
		{
			if (*s == *a)
			{
				count++;
				break;
			}
			a++;
		}
		if (*a == '\0')
		{
			break;
		}
		s++;
	}
	return (count);
}
