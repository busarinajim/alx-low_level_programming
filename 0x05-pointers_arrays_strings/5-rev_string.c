#include "main.h"

/**
 * rev_string - reverses string
 * @s: string to be reversed
 * Return: reversed string
 */

void rev_string(char *s)
{
	int len;
	int i;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		return (s[i]);
	}
}
