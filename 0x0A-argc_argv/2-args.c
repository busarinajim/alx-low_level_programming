#include <stdio.h>

/**
 * main - prints all arguments received by program
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 if success
 */

int main(int argc, char **argv)
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
