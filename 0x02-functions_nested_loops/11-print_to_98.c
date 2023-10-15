#include "main.h"

/**
 * print_int - prints integers using _putchar
 * @num: integer to be printe
 * Return:
 */

void print_int(int num)
{
	int index = 9;
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
	int i;

	for (i = index + 1; i < 10; i++)
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
	if (n <= 98)
	{
		int i;
		
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
		for (int i = n; i >= 98; i--)
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
