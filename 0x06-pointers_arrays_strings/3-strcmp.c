#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: difference between 2 strings
 */

int _strcmp(char *s1, char *s2)
{
	int s3;
	
	s3 = *s1 - *s2;
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (s3);
}
