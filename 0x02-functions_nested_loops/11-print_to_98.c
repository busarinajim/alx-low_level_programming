#include "main.h"

/**
 * print_int - prints integers using _putchar
 * @num: integer to be printe
 * Return:
 */

void print_int(int num)
{
	int i, index = 9;
	char buffer[10];
	
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	else if (num == 0)
	{
		_putchar('0');
		return;
	}
	while (num > 9)
	{
		buffer[index--] = num % 10 + '0';
		num /= 10;
	}
	for (i = index; i < 10; i++)
	{
		_putchar(buffer[i]);
	}
}

/**
 * print_to_98 - prints n to 98
 * @n: integer to start printing from
 */

void print_to_98(int n)
{
	int i;
	
	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			print_int(i);
			if (i < 98)
			{
				_putchar(',');
				_putchar(' ');
			}	
			else
			{
				_putchar('\n');
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			print_int(i);
			if (i > 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
