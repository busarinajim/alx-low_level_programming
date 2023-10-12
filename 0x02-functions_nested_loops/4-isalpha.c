#include "main.h"

/**
 * _isalpha - checks if character is alphabet
 * @c: character to check
 *
 * Return: 1 if alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' <= 'z' || c >= 'A' <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
