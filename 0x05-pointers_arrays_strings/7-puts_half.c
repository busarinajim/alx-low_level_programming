#include "main.h"

/**
 * puts_half - prints second half of string
 * str: string to be printed
 *
 */

void puts_half(char *str)
{
	int length, start_index, i;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		start_index = length / 2;
	}
	else
	{
		start_index = (length - 1) / 2;
	}
	for (i = start_index; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
