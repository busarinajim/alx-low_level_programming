#include <stdio.h>

/**
 * main - prints alphabet in lower and upper case
 *
 * Return: 0
 */

int main(void)
{
	char alphabets;
	char upper_alphabet;

	alphabets = 'a';
	upper_alphabet = 'A';
	while (alphabets <= 'z')
	{
		putchar(alphabets);
		alphabets++;
	}
	while (upper_alphabet <= 'Z')
	{
		putchar(upper_alphabet);
		upper_alphabet++;
	}
	putchar('\n');
	return (0);
}
