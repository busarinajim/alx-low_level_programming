#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 *
 */

void print_number(int n)
{
	int div = 1;
	int digit;

	if (n < 0)
	{
		_putchar('-');
	}

	while (n / div >= 10 || n / div <= -10)
	{
		div *= 10;
	}

	while (div != 0)
	{
		digit = n / div;
		if (digit < 0)
		{
			digit = -digit;
		}
		_putchar(digit + '0');
		n %= div;
		div /= 10;
	}
}
