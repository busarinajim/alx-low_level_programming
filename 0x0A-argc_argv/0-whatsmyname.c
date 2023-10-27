#include <stdio.h>

/**
 * main - prints name of program
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 if success
 */

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
