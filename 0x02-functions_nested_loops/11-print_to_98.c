#include "main.h"

/**
 * print_to_98 - prints n to 98
 * @n: integer to start printing from
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (int i = n; i <= 98; i++)
		{
			_putchar("%d", i);
			if (i < 98)
			{
				_putchar(", ");
			}
			else
			{
				_putchar("\n");
			}
		}
	}
	else
	{
		for (int i = n; i >= 98; i--)
		{
			_putchar("%d", i);
			if (i > 98)
			{
				_putchar(", ");
			}
			else
			{
				_putchar("\n");
			}
		}
	}
}
