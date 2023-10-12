#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: function parameter, character to check
 *
 * Return: 1 if lower, 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
