#include <stdio.h>

/**
 * main - prints number of arguments passed to  program
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 if success
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
