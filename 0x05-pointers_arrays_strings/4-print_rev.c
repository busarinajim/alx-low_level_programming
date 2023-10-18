#include "main.h"

/**
 * print_rev - prints string in reverse order
 * @s: string to be printed
 *
 */

void print_rev(char *s)
{
	char len;

	len = '\0';
	while (len = *s)
	{
		_putchar(*s);
		len--;
	}
	_putchar('\n');
}
