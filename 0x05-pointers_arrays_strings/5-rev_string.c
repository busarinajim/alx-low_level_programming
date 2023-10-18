#include "main.h"

/**
 * rev_string - reverses string
 * @s: string to be reversed
 * Return: reversed string
 */

void rev_string(char *s)
{
	int len, start, end;
	char tmp;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	start = 0;
	end = len - 1;

	while (start < end)
	{
		tmp = s[start];
		s[start] = s[end];
		s[end] = tmp;

		start++;
		end--;
	}
}
