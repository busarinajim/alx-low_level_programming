#include "main.h"

/**
 * _memset - fills first n byte pointed to by s with b
 * @s: pointer of type char
 * @n: first byte of memory area pointed by s
 * @b: constant byte to fill n with
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n > 0)
	{
		*ptr = b;
		ptr++;
		n--;
	}
	return (s);
}
