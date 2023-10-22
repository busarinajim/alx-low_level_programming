#include <stdio.h>

/**
 * main - prints combination of 2 two-digits without repetition
 *
 * Return: 0
 */

int main(void)
{
	int i;
	int x;

	for (i = 0; i < 100; i++)
	{
		for (x = i + 1; x < 100; x++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
			if ((i < 98) || (x < 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

