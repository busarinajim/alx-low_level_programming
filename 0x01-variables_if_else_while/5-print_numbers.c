#include <stdio.h>

/**
 * main - prints single digit numbers in base 10
 *
 * Return: 0
 */

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		printf("%d", number);
	}
	printf("\n");
	return (0);
}
