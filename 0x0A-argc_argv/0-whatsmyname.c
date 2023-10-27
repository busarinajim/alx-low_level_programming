#include "main.h"

/**
 * main - prints name of program 
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 if success
 */

int main (int argc __attribute__((unused)), char **argv)
{
	char *s = argv[0];

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\0');
	return (0);
}
